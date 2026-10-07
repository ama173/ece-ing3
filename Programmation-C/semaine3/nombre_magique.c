#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int generate()
{
    //DDV
    int secret;
    //initialisation
    secret = rand()%101; // initialise le nombre magique
    
    //traitements
    return secret;
}

int jouer (int secret)
{
    // DDV
    int guess;
    int tentatives = 0;
    //traitement
    do
    {
        printf("Votre nombre: "); // demande au joueur son guess
        // fflush(stdout);
        scanf(" %d", &guess); // scan pour le guess
        printf("\n"); // va a la ligne

        tentatives ++; // rajoute +1 au score

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
    //DDV
    
    //bravo vous ave trouve le nombre magique xxx en xxx tentatives
    printf(" Bravo! Vous avez trouve le nombre magique '%d'", secret);
    printf(" en %d tentatives.\n", tentatives);
}



int main()
{
    //DDV
    int secret;
    int tentatives;
    srand(time(NULL)); // initialise timer?
    // traitement
    
    secret = generate();

    tentatives = jouer(secret);
    
    score(tentatives, secret);

    //return

    return 0;
}