#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    /*
        Structs = a collection of related members ("vaialbles") that can be of different data types
        listed under one name in a block of memory
        - A struct is a user-defined data type that groups related data together
        - A struct can contain any number of members of any data type
        - The members of a struct can be of any data type, including other structs
        - The members of a struct can be accessed using the dot (.) operator
        - The members of a struct can be accessed using a pointer to the struct and the arrow (->) operator

        Structs are very similar to classes in other lanauges, but they do not have methods
    */

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Adonalsium");
    player1.score = 4;

    strcpy(player2.name, "Hoid");
    player2.score = 5;

    printf("\nName: %s\n", player1.name);  // Adonalsium
    printf("Points: %d\n", player1.score); // 4

    printf("\nName: %s\n", player2.name);  // Hoid
    printf("Points: %d\n", player2.score); // 5

    return 0;
}