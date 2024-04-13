#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][200] = {
        "1. Which 3 shards are real?",
        "2. What is the name of the first book in the Stormlight Archive series?: ",
        "3. What is the name of the first book in the Mistborn series?: ",
        "4. Who is the worldhopper who appears in both the Stormlight Archive and Mistborn series?: ",
        "5. What is the name of the planet where the Stormlight Archive series takes place?: ",
        "6. What is the name of the planet where the Mistborn series takes place?: ",
        "7. What is the name of the planet where the Warbreaker series takes place?: ",
        "8. Which shards are on the planet Roshar?: ",
        "9. What is the name of the sword that can cut through anything?: ",
        "10. What is the name of the sword that can heal anything?: ",
        "11. Which main character in the Mistborn series is present on Roshar in the Stormlight Archive series?: ",
    };
    char options[][200][200] = {
        {"a. Honor, Autonomy, Malice", "b. Cultivation, Favor, Mercy", "c. Odium, Assembly, Preservation", "d. Ruin, Devotion, Dominion"},
        {"a. Words of Radiance", "b. Rhythm of War", "c. The Way of Kings", "d. Oathbringer"},
        {"a. The Hero of Ages", "b. The Final Empire", "c. The Well of Ascension", "d. The Alloy of Law"},
        {"a. Sazed", "b. Kelsier", "c. Vin", "d. Hoid"},
        {"a. Sel", "b. Scadrial", "c. Nalthis", "d. Roshar"},
        {"a. Roshar", "b. Nalthis", "c. Scadrial", "d. Sel"},
        {"a. Nalthis", "b. Sel", "c. Scadrial", "d. Roshar"},
        {"a. Honor and Cultivation", "b. Ruin and Preservation", "c. Odium and Autonomy", "d. Ruin and Odium"},
        {"a. Daydrinker", "b. Nightblood", "c. Shardblade", "d. Coldwidow"},
        {"a. Nightblood", "b. Lifegiver", "c. Daydrinker", "d. Shardblade"},
        {"a. Elend", "b. Kelsier", "c. Vin", "d. Sazed"},

    };
    char answers[11] = {'d', 'c', 'b', 'd', 'd', 'c', 'a', 'a', 'b', 'a', 'b'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    char guessOptions[] = {'a', 'b', 'c', 'd'};
    int score = 0;
    int rightAnswers = 0;
    printf("Welcome to the Cosmere quiz game!\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("**************************************************************************\n");
        printf("%s\n", questions[i]);
        printf("**************************************************************************\n");

        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", options[i][j]);
        }
        do
        {
            printf("Enter your answer: ");
            scanf(" %c", &guess);
            guess = tolower(guess);
        } while (guess != 'a' && guess != 'b' && guess != 'c' && guess != 'd');

        if (guess == answers[i])
        {
            printf("You got it right!\n");
            score++;
            rightAnswers++;
        }
        else
        {
            printf("You got it wrong!\n");
            score -= 2;
        }
    }
    printf("You got %d out of %d questions correct!\n", rightAnswers, numberOfQuestions);
    printf("Your score is: %d\n", score);
    printf("**************************************************************************\n");
    if (score == numberOfQuestions)
    {
        printf("You are a Cosmere LEGEND!\nI expect to see you at the next Shardic Council meeting!\n");
    }
    else if (score < numberOfQuestions && score > 5)
    {
        printf("You are a Cosmere fan!\nThe journey to Urithiru begins with a single step!\n");
    }
    else
    {
        printf("You have so much room to grow. I envy you!\nGo forth and read the Cosmere, then come back and share what you have learned!\n");
    }
    printf("**************************************************************************\n");
    return 0;
}