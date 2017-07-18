#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int nombreMystere = 0, nombreDonne = 0, nombreDeCoups = 0, continuerPartie = 1, choixMenu = 0;
	const int MAX = 100, MIN = 1;

	do
	{


		printf("1=Player vs CPU\n");
		printf("2=Player vs Player\n");
		scanf("%d", &choixMenu);

		if  (choixMenu == 1)
		{
			srand(time(NULL));
			nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

		}
		else

		{
			printf("joueur 1 entrer le numero mystere");
			scanf("%d", &nombreMystere);

		}




		do
		{

			printf ("Quel est le nombre ?\n");
			scanf ("%d", &nombreDonne);
			nombreDeCoups++;

			if (nombreDonne > nombreMystere)

				printf ("c'est moins!\n");

			else if (nombreDonne < nombreMystere)

				printf ("c'est plus!\n");

			else

				printf("Bravo vous avez reussi en %d coups!\n", nombreDeCoups);
		}
		while (nombreDonne != nombreMystere);
		printf("voulez-vous rejouer? 1=oui, 2=non");
		scanf("%d" ,&continuerPartie);
	}
	while (continuerPartie != 2);
}
