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
	printf("Entre le nombre mystere\n\n");
	scanf("%d",&nombreEntre);
		while (nombreMystere!=nombreEntre)
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
	printf("Bravo tu as trouvé le nombre mystere %d en %d coups\n",nombreEntre, compteur);
	return (0);
}
