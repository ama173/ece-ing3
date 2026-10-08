#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*void afficher(int* tab)
{
	// DDV
	int colonnes = 5 ;
	int lignes = 4;

	//imprimer le tableau en format matrice 4x5
	
	for(int j = 0; j < lignes; j++)
	{
		for (int i = 0; i < colonnes; i++)
		{
			printf("%d ", tab[i]);
		}
		printf("\n");
	}
	printf("\n");
}
	*/
	
void afficher (int* tab, int taille)
{
	// DDV
	int colonnes = 5 ;
	int lignes = 4;

	//imprimer le tableau en format matrice 4x5
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", tab[i]);
		if ((i+1) % 5 == 0) 
		{
			printf("\n");
		}
		
	}
	printf("\n\n");
}

/*
parce que les indices commencent a 0 mais on veut passer a la ligne a 5
i % 5 == 0 → vrai pour i = 0, 5, 10, 15
(i + 1) % 5 == 0 → vrai pour i = 4, 9, 14, 19
*/


void remplir(int* tab, int taille)
{
		//generer 20 entiers aleatoires
		for (int i = 0; i < taille; i++)
		{
			tab[i] = rand() % 101;
		}	
}	

int main ()
{
	//DDV
	int taille = 20; // taille du tableau
	srand(time(NULL)); //necessaire pour la fonction rand()
	int tab[taille]; //initialiser le tableau de n entiers
	
	//Traitement
	
	afficher(tab, taille); //Afficher des valeurs poubelle
	
	remplir(tab, taille); // Remplir la matrice avec des nombres aleatoires
	
	afficher(tab, taille); // Afficher de la matrice aleatoire
	
	return 0;
}	