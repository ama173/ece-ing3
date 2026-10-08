
#include <stdio.h>

void saisir(int *nb)
{
    printf("Saisir un entier : ");
    scanf("%d", nb);
}

int multiple(int nb, int x)
{
    if (nb % x == 0)
    {
        return x;
    }
    else
    {
        return 0;
    }
}

void afficherligne(int nb, int x)
{
    printf("Le nombre %d est multiple de %d\n", nb, x);
}

int main()
{
    // DDV
    int nb, i, x;

    // Traitement
    saisir(&nb);

    for (i = 1; i <= nb; i++)
    {
        x = multiple(nb, i);

        if (x != 0)
        {
            afficherligne(nb, x);
        }
    }

    return 0;
}
