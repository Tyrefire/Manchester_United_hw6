/*
 * =====================================================================================
 *
 *       Filename:  Mancester_United_hw6_task1.c
 *       	Usage:  ./Mancester_United_hw6_task1.c
 *    Description:  convert Rectangular to polar
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:10:22 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>


<<<<<<< HEAD
/* Function Prototypes */
void Usage(void);
/* Main Program */
int main(int argc, char *argv[])
{
	printf("Usage ./task1 x-coordinate y-coordinate\n");
	if( argc != 3)
	{
		printf("both params are required.\nmust be floating point\n");
		exit(2);
	}
	else
	{
		Usage();
	}
=======

/* Main Program */
int main(int argc, char *argv[])
{
	int x, y;
	printf("Enter the Rectangular coordinates x and y: ");
	scanf("%d %d", &x, &y);
>>>>>>> d01f3112a052297ca3710ca62e58b4c14f4e6c1f

	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("The polar coordinates are:\n");

	return;
}


