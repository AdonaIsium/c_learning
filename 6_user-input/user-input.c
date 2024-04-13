#include <stdio.h>
#include <string.h>

int main()
{

    char name[25]; // bytes
    int age;

    printf("What's your name?\n");
    // scanf("%s", name); // read string without spaces
    fgets(name, 25, stdin);        // read string with spaces
    name[strlen(name) - 1] = '\0'; // remove '\n' from 'name

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}