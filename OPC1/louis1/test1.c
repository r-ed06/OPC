#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int nombreEntre;
	int nombreMystere;
	const int MAX = 100;
	const int MIN = 1;
	int compteur;

	nombreEntre = 0;
	nombreMystere = 0;
	compteur = 0;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	printf("entre le nombre mystere\n\n");
	for (nombreMystere!=nombreEntre)
	{
		scanf("%d",&nombreEntre);
		while (nombreMystere!=nombreEntre)
		{
			if(nombreEntre<nombreMystere)
			{
				printf("c'est plus\n\n");
				scanf("%d",&nombreEntre);
				compteur++;
			}
			else if(nombreEntre>nombreMystere)
			{	
				printf("c'est moins\n\n");
				scanf("%d",&nombreEntre);
				compteur++;
			}
			else
			{
				printf("bravo tu as trouvé le nombre myster %d en %d coups",nombreEntre, compteur);
				printf("essaye encore??\n\n");
				scanf("%d",&nombreEntre);
			}
		}
	return (0);
	}
}
