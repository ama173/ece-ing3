#include <stdio.h>

void changer(int *p)
{
    *p = 20; / *p = va a cette addresse et change la valeur qui est la
}

int main()
{
    int x = 5; //x contient 5

    printf("Avant : %d\n", x);

    changer(&x); // &x donne l'addresse de x

    printf("Apres : %d\n", x);

    return 0;
}