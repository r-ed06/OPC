#include <stdio.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int		main(int argc, char *argv[])
{
	int heures;
	int minutes;

	heures = 0;
	minutes = 90;
	
	/* On envoie l'adresse de heures et minutes*/
	decoupeMinutes(&heures, &minutes);

	/* Cette fois les valeurs ont ete modif */
	printf("%d heures et %d minutes", heures, minutes);

	return (0);
}

void	decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)
{
	/* Attention a nes pas oublier de mettre une etoile devant le nom des pointeurs! Comme ca, vous pouvez modifier la valeur des variables, et non leur adresse ! Vous ne voudriez pas diviser des adresses, n'est ce pas? ;D */
	*pointeurHeures = *pointeurMinutes / 60;
	*pointeurMinutes = *pointeurMinutes % 60;
}
