#include<stdio.h>

char saisir()
{
	// DDV
	char lettre;
	// 1. saisie
	printf("Votre caractere: ");
	scanf(" %c", &lettre);
	// retour de la valeur
	return lettre;

}

int analyser (char val)
{
	// DDV
	int nat;
	/// 1.
	if (val >= 'a' && val <= 'z')
		{
			nat = 1;
		}
	else if (val >= 'A' && val <= 'Z')
		{
			nat = 2;
		}
	else if (val >= '0' && val <= '9')
		{
			nat = 3;
		}
	else
		{
			nat = 4;
		}
	return nat;
	}
	
void afficher (int n)
{ 
	// DDV
	// analyser et afficher
	if (n==1)
		{
			printf("Votre caractere est une minuscule.\n");
		}
	else if (n==2)
		{
			printf("Votre caractere est une majuscule.\n");
		}
	else if (n==3)
		{
			printf("Votre caractere est un chiffre.\n");
		}
	else  if (n==4)
		{
			printf("Votre caractere est un caractere special.\n");
		}
}

int main()
{
	//DDV
	char val;
	int nature;
	//
	do 
	{
		val = saisir();
		nature = analyser(val);
		afficher(nature);
	}
	while (val != '#');
		
	return 0;
}