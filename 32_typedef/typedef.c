#include <stdio.h>
#include <string.h>

// typedef char user[25];

// If we use the typedef keyword when creating a struct, we can give the struct a nickname
//  This way we don't need to use the keyword "struct" when declaring a variable of that type
//  We can just use the nickname instead

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Adonalsium", "password123", 420};
    User user2 = {"Hoid", "password456", 69};

    printf("Name: %s\n", user1.name);         // Adonalsium
    printf("Password: %s\n", user1.password); // password123
    printf("ID: %d\n", user1.id);             // 420
    printf("\n");
    printf("Name: %s\n", user2.name);         // Hoid
    printf("Password: %s\n", user2.password); // password456
    printf("ID: %d\n", user2.id);             // 69

    return 0;
}