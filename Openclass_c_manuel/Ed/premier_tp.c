#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int		menu(int nb)
{
	printf("Heyo, s'quoi le nombre? ");
	scanf("%d", &nb);
	return (nb);
}

int		main(int argc, char** argv)
{
	int nbrMystere = 0;
	int nbrUser = 0;
	int choice = 0;
	const int MAX = 100;
	const int MIN = 1;

	srand(time(NULL));
	nbrMystere = (rand() % (MAX - MIN + 1)) + MIN;

	do
	{
		printf("Heyo, s'quoi le nombre ? ");
		scanf("%d", &nbrUser);

		if (nbrMystere > nbrUser)
			printf("C'est plus ;)");
		else if (nbrMystere < nbrUser)
			printf("C'est moins ;D");
		else
			printf("gg wp, type 1 for re, 2 if you're a pussy ");
			scanf("%d", &choice);
				if (choice == 1)
					nbrUser = menu(nbrUser);
				else
					return (0);
	} while (nbrUser != nbrMystere);
	
	return (0);
}
