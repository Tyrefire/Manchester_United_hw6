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

/* Function Prototypes */
void Usage(void);
int AskQ(void);

/* Main Program */
int main(int argc, char *argv[])
{
	int a;

	printf("Usage ./task1 x-coordinate y-coordinate\n\n");
	if( argc != 3)
	{
		printf("both params are required.\n\nmust be floating point\n\n");
		exit(2);
	}
	else
	{
		Usage();
	}

	a = AskQ();
	if(a == 1)
	{
	main(argc, argv);
	}
	else
	{
	printf("Done!");
	}

	return 0;
}
/* Function Defenitions */
void Usage(void)
{
	printf("The polar coordinates are:\n\n");

	return;
}


int AskQ(void)
{
	int j;
	printf("y = 1, n = 0\n");
	printf("Do you want to continue?\n");
	scanf("%d", &j);
	if(j == 1 || j == 0)
	{
		return(j);
	}
	else
	{
		printf("Does not compute!\n");
		printf("Error!\n");
		printf("\n\n\nSoft Reboot....\n");
		AskQ();
	}

	return j;
}
