#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nombreDeVies = 5; // Au départ, le joueur a 5 vies

	printf("Vous avez %d vies\n", nombreDeVies);
	printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
	nombreDeVies = 4; // Il vient de perdre une vie !
	printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);

	return 0;
}

void	test()
{
	int nombreDeVies = 5, niveau = 1;

	printf("Vous avez %d vies et vous etes au niveau n° %d\n", nombreDeVies, niveau);

	return 0;
}
