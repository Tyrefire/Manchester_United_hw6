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
#include <math.h>

/* Function Prototypes */
void Usage(void);
void GetRec(double* x, double* y);
int AskQ(void);
void Polar(double x, double y, double* r, double* theta);
/* Main Program */
int main(int argc, char *argv[])
{
	int a;
	double x, y;
	double r, theta;

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
		GetRec(&x, &y);
		Polar(x, y, &r, &theta);
	}
	else
	{
		printf("Done!\n");
	}

	return 0;
}
/* Function Defenitions */
void Usage(void)
{
	printf("The polar coordinates are:\n");

	return;
}
void GetRec(double* x, double* y)
{
	printf("Enter the x coordinate: \n");
	scanf("%lf", &*x);
	printf("Enter the y coordinate: \n");
	scanf("%lf", &*y);
	return;

}
int AskQ(void)
{
	int j;
	printf("Do you want to continue?\n");
	printf("y = 1, n = 0\n");
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
void Polar(double x, double y, double* r, double* theta)
{
	r = double* sqrt((x*x)+(y*y));
	theta = atan(y/x);
	printf("Distance from origin: %p\n", &*r);
	printf("Angle (in degrees) from x-axis: %p\n", &*theta);
	return;
}
