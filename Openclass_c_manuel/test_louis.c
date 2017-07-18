#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int nombreEntre = 0, nombreMystere = 0, coups = 0, nombreJ1 = 0;
	long continuer = 1, mode = 0;
	const long MIN = 1, MAX = 100;
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	printf("salut tu veux joue solo ou a 2 ?\n1. Mode 1 joueur\n2. Mode 2 joueurs\nChoix: ");
	scanf("%ld", mode);
	if (mode == 1)
	{
		while(continuer)
		{
			do{
				printf("gamble time: ");
				scanf("%d", &nombreEntre);
				coups++;
				if(nombreEntre > nombreMystere)
					printf("newbie C'est moins !\n\n");
				else if(nombreEntre < nombreMystere)
					printf("newbie C'est plus !\n\n");
				else
					printf("Bravo nanou , tu as trouve le nombre mystere qui est bien %d, par contre tu suck parce que tu l'as trouve en %d coups !\n\n", nombreMystere, coups);
			} while (nombreMystere != nombreEntre);
		}
		printf("essaye encore?\n0. Non\n1. Oui");
		scanf("%ld", &continuer);
	}
	else
	{
		while(continuer)
		{
			printf("nanou, gamble time");
			scanf("%d", &nombreJ1);
			system("cls");
			do {
				printf("gamble time: ");
				scanf("%d", &nombreEntre);
				if(nombreEntre > nombreJ1)
					printf("Newbie C'est moins !\n\n");
				else if(nombreEntre < nombreJ1)
					printf("Newbie C'est plus !\n\n");
				else
					printf("Bravo, le nombre mystere de nanou etait bien %d\n", nombreJ1);
			} while (nombreJ1 != nombreEntre);
			printf("essaye encore?\n0. Non\n1. Oui");
			scanf("%ld", continuer);
		}
		return 0;
	}
}
