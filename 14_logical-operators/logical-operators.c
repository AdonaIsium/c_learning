#include <stdio.h>
#include <stdbool.h>

int main()
{

    // logical operators = && (AND), || (OR), ! (NOT)

    // && (AND) = both conditions must be true
    float temp;
    bool sunny;

    float army;
    bool war;

    int n;

    printf("\n What is the temperature outside? ");
    scanf("%f", &temp);

    printf("\n Is it sunny outside? (0 = no, 1 = yes) ");
    scanf("%d", &n);
    // Convert n to a boolean
    sunny = n;

    if (temp >= 0 && temp <= 100 && sunny)
    {
        printf("\nThe weather is good!\n");
    }
    else
    {
        printf("\nThe weather is bad!\n");
    }

    // || (OR) = at least one condition must be true
    printf("\nHow many soldiers do we have? ");
    scanf("%f", &army);

    printf("\nAre we at war? (0 = no, 1 = yes) ");
    scanf("%d", &n);
    // Convert n to a boolean
    war = n;

    if ((army >= 100 && war) || (army >= 1000 && !war))
    {
        printf("\nWe are going to war!\n");
    }
    else
    {
        printf("\nWe are not going to war!\n");
    }

    return 0;
}