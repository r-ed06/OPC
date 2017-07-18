#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char*argv[])
{
	int nombrejooz = 0;
	int nombreMystere = 0;
	const int MAX = 100, MIN = 1;

	srand(time(NULL));
	nombreMystere = (rand()%(MAX-MIN+1))+MIN;

	do
	{
		printf("Devine le nombre mystere propose par la bestiole inclus entre 1 et 100: \n");
		scanf("%d", &nombrejooz);
		if (nombrejooz == nombreMystere) /* Gain du jeu*/
		{
			printf ("Tu as trouve le nombre, SUPER !");
		}
		else if (nombrejooz > nombreMystere)
		{
			printf("Tu as sélectionne un nombre trop important\n");
		}
		else if (nombrejooz < nombreMystere)
		{
			printf("Tu as selectionne un nombre trop faible\n");
		}
		else
		{
			printf("Tu n'as pas saisi un nombre entre 1 et 100\n");
		}
	}while (nombreMystere != nombrejooz);
	return 0 ;
}
