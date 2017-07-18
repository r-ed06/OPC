#include <stdio.h>
#include <stdlib.h>

void	ft_scan(int *nb1, int *nb2)
{
	printf("Entrez le nombre 1 : ");
	scanf("%d", &nb1);
	printf("Entrez le nombre 2 : ");
	scanf("%d", &nb2);
}
/* Fonction scan, qui prend en parametre un int et le renvoie a mon main pour qu'il puisse faire les calculs, donc ma fonction prend l'int envoye par le main, qui est nombre1, qui a ce stade est = 0, scan ce que le gars tape, renvoie le int a main pour faire le calcul */


int	main(int argc, char *argv[]		)
{
	int choice = 0;
	int nombre1 = 0;
	int nombre2 = 0;
	int nbr1 = 0;
	int nbr2 = 0;
	int resultat = 0;

	printf("Entrez le calcul que vous souhaitez :\n1. Addition   2. Soustraction   3. Multiplication   4. Modulo  : ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		ft_scan(&nbr1, &nbr2);
		resultat = nbr1 + nbr2;
		printf("%d - %d = %d\n", nbr1, nbr2, resultat);
	}
	else if (choice == 2)
	{
		ft_scan(&nbr1, &nbr2);
		resultat = nbr1 - nbr2;
		printf("%d - %d = %d\n", nbr1, nbr2, resultat);
	}
}
