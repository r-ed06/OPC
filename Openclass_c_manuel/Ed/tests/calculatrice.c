#include <stdio.h>
#include <stdlib.h>

int		ft_scan1(int nb1)
{
	printf("Entrez le nombre 1 : ");
	scanf("%d", &nb1);
	return (nb1);
}
/* Fonction scan, qui prend en parametre un int et le renvoie a mon main pour qu'il puisse faire les calculs, donc ma fonction prend l'int envoye par le main, qui est nombre1, qui a ce stade est = 0, scan ce que le gars tape, renvoie le int a main pour faire le calcul */

int		ft_scan2(int nb2)
{
	printf("Entrez le nombre 2 : ");
	scanf("%d", &nb2);
	return (nb2);
}

int		main(int argc, char *argv[])
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
		nbr1 = ft_scan1(nombre1);
		nbr2 = ft_scan2(nombre2);
/* Ici on utilise une deuxieme variable pour placer la valeur, me demandez pas pourquoi mais ca marchait pas avant, si j essayais de directement attribuer une valeur a nombre1 ca marchait pas, nbr1 marche */
		resultat = nbr1 + nbr2;
		printf("%d + %d = %d\n", nbr1, nbr2, resultat);
	}
	else if (choice == 2)
	{
		nbr1 = ft_scan1(nombre1);
		nbr2 = ft_scan2(nombre2);

		resultat = nbr1 - nbr2;
		printf("%d - %d = %d\n", nbr1, nbr2, resultat);
	}
	else if (choice == 3)
	{
		nbr1 = ft_scan1(nombre1);
		nbr2 = ft_scan2(nombre2);

		resultat = nbr1 * nbr2;
		printf("%d x %d = %d\n", nbr1, nbr2, resultat);
	}
	else if (choice == 4)
	{
		nbr1 = ft_scan1(nombre1);
		nbr2 = ft_scan2(nombre2);

		resultat = nbr1 % nbr2;
		printf("%d Modulo %d = %d\n", nbr1, nbr2, resultat);
	}
	else
	{
		printf("Eh connard j'ai dit entre 1 et 4");
	}
	return 0;
}
