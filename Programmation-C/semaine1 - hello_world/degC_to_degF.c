#include <stdio.h>
#define C1 32
int main()
{
    /* Declaration des ressources */
    float degC,degF;//Declaration de deux variables de type float
    int choix; //et d'une variable pour le choix de l'utilisateur
    //boucle de retour au menu/
    do
    {
        //affichage du menu (IHM)
        printf("\n1.Convertir des degres C en degres F\n");
        printf("2.Convertir des degres F en degres C\n");
        printf("0.Quitter\n");
        //saisie clavier
        scanf("%d",&choix);
        /*tests : en fonction du choix
        le programme va s'orienter differemment*/
        if(choix==1)
        {
            //Recuperation des degres Celsius
            printf("saisir les deg C :\n");
            scanf("%f",&degC);
            //Conversion (calcul des deg Fahrenheit)
            degF=1.8*degC+(C1);
            //affichage du resultat
            printf("\n%5.2f degres Celsius = %5.2f degres Fahrenheit\n",degC,degF);
        }
        else
        {
            if(choix==2)
            {
                printf("saisir les deg F :");
                scanf("%f",&degF);
                degC=(degF-(C1))/1.8;
                printf("\n%5.2f degres F = %5.2f degres C\n",degF,degC);
            }
        }
    }
    while(choix!=0); //test de fin de boucle
    //fin du programme
    return 0;
}