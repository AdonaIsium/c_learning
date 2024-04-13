#include <stdio.h>

int main()
{
    FILE *pF = fopen("/Users/lanre/stormlight.txt", "r"); // r = read mode
    char buffer[255];
    if (pF == NULL)
    {
        printf("File not found\n");
        return 1;
    }
    while (fgets(buffer, 255, pF) != NULL) // read the first 255 characters from the file and store them in the buffer
    {
        printf("%s\n", buffer); // print the contents of the buffer
    }

    fclose(pF); // close the file (good practice to close the file after reading from it)

    return 0;
}