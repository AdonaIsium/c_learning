#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a section of code as long as the specified condition is true
    // a while loop might not run at all if the condition is false

    char name[25];

    printf("Enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // remove the newline character from the end of the string

    while (strlen(name) == 0)
    {
        printf("You didn't enter anything. Please enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0'; // remove the newline character from the end of the string
    }

    printf("Hello, %s!\n", name);

    return 0;
}