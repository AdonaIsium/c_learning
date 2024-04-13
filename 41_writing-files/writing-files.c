#include <stdio.h>

int main()
{
    ///*
    FILE *pF = fopen("test.txt", "w"); // w = write mode // a = append mode // r = read mode // r+ = read and write mode

    fprintf(pF, "While I think Mistborn is a great series, my absolute favorite series in the cosmere is The Stormlight Archive. I love the characters, the world, and the magic system. I can't wait for the next book to come out! Brandon Sanderson is a fantastic author.");

    fclose(pF); // close the file (good practice to close the file after writing to it
    //*/

    // remove a file
    // Here, we are removing the file we created above by using the remove() function
    // to use remove() you can use the following syntax:
    // remove("file_name");
    /*
    if (remove("test.txt") == 0)
    {
        printf("File deleted successfully\n");
    }
    else
    {
        printf("Error deleting file\n");
    }
    */
    return 0;
}