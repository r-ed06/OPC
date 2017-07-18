#include<stdio.h>
#include<stdlib.h>

int		main(int argc, char *argv[])
{
	int age = 0; // On initialise la variable à 0
	int taille = 0;

	printf("Quel age avez-vous ? ");
	scanf("%d", &age); // On demande d'entrer l'âge avec scanf
	printf("Ah ! Vous avez donc %d ans !\n\n", age);
	printf("Et quelle taille faites vous en centimetres?");
	scanf("%d", &taille);
	printf("Ah vous faites %dcm !\n\n", taille);
	/* donc le deuxieme scanf re-interrompt le programe juste apres, scanf pause tout jusqua ce qu'une valeur soit entree */

	return 0;
}
