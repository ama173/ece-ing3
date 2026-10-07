#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate()
{
    int secret;

    secret = rand() % 101;

    return secret;
}

int jouer(int secret)
{
    int guess;
    int tentatives = 0;

    do
    {
        printf("Votre nombre : ");
        scanf("%d", &guess);

        tentatives++;

        if (guess > secret)
        {
            printf("Trop grand ! Essayez un nombre plus petit.\n");
        }
        else if (guess < secret)
        {
            printf("Trop petit ! Essayez un nombre plus grand.\n");
        }

    } while (guess != secret);

    return tentatives;
}

void score(int tentatives, int secret)
{
    printf("Bravo ! Vous avez trouve le nombre magique %d en %d tentatives.\n",
           secret, tentatives);
}

int main()
{
    int secret;
    int tentatives;

    srand(time(NULL));

    secret = generate();
    tentatives = jouer(secret);
    score(tentatives, secret);

    return 0;
}
