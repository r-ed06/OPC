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
	int repeat;

	nombreEntre = 0;
	nombreMystere = 0;
	compteur = 0;
	repeat = 1;

		while (repeat == 1 || repeat != 2)
		{
			srand(time(NULL));
			nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
			printf("Entre le nombre mystere\n\n");
			scanf("%d",&nombreEntre);
			while (nombreEntre!=nombreMystere)
			{
				if(nombreEntre<nombreMystere)
				{
					printf("C'est plus\n\n");
					scanf("%d",&nombreEntre);
					compteur++;
				}
				else if(nombreEntre>nombreMystere)
				{	
					printf("C'est moins\n\n");
					scanf("%d",&nombreEntre);
					compteur++;
				}
			}
			if (repeat == 1)
			{
			printf("Bravo tu as trouvé le nombre mystere %d en %d coups\n\n Si tu veux retenter tape 1, sinon tape 2 : ",nombreEntre, compteur);
			scanf("%d", &repeat);
			}
			else if (repeat == 2)
			{
				printf("Merci d'avoir joue a bientot! ^.^");
			}
			else
			{
				printf("J'ai dit 1 ou 2 >.< ");
			}
			compteur = 0;
		}
	return (0);
}
