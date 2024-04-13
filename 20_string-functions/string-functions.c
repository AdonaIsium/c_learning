#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Shattered Plains";
    char string2[] = "Adonalsium";

    // The following are available only in the Microsoft C library.
    // strlwr(string1); // Convert string to lowercase
    // strupr(string1); // Convert string to uppercase

    // The following are available in both the Microsoft C library and the ANSI C library.
    // strcat(string1, string2); // Concatenate string2 to string1 (Appends string 2 to end of string 1)
    //  strncat(string1, string2, 3); // Concatenate n characters of string2 to string1 (Appends n characters of string 2 to end of string 1)
    // strcpy(string1, string2); // Copy string2 to string1
    //  strncpy(string1, string2, 3); // Copy n characters of string2 to string1
    //  strcmp(string1, string2); // Compare string1 with string2
    //  strncmp(string1, string2, 3); // Compare n characters of string1 with string2
    //  strlen(string1); // Get length of string
    //  strchr(string1, 'a'); // Get pointer to first occurrence of character in string
    //  strrchr(string1, 'a'); // Get pointer to last occurrence of character in string
    //  strstr(string1, "abc"); // Get pointer to first occurrence of string in string
    //  strpbrk(string1, "abc"); // Get pointer to first occurrence of any character in string
    //  strtok(string1, "abc"); // Split string into tokens

    printf("%s\n", string1);

    //  int result = strlen(string1); // returns string length as an int
    int result = strcmp(string1, string2);
    // ^ returns 0 if strings are equal, -x if string1 is less than string2, x if string1 is greater than string2
    // int result = strncmp(string1, string2, 1);
    // ^ returns 0 if strings are equal, -1 if string1 is less than string2, 1 if string1 is greater than string2
    // int result = strcmpi(string1, string2); // case insensitive comparison
    // int result = ttrnicmp(string1, string2, 3); // case insensitive comparison of n characters

    // printf("%d\n", result); // 4 (Adonalsium has 4 characters)

    if (result == 0)
    {
        printf("The strings are equal\n");
    }
    else if (result < 0)
    {
        printf("The first string is less than the second\n");
    }
    else
    {
        printf("The first string is greater than the second\n");
    }

    return 0;
}