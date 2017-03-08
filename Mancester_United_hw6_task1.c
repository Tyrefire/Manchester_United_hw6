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
void ShowIt(double r, double ang);
void Polar(double x, double y, double* r, double* theta);

/* Main Program */
int main(int argc, char *argv[])
{
	int a;
	double x, y;
<<<<<<< HEAD
	double r, theta;
=======
	double r = 0.0, theta = 0.0;
>>>>>>> f44f9aa176aec1aa0209ce52363d47ac0787dd3f

	printf("Usage ./task1 x-coordinate y-coordinate\n\n");
	if( argc != 3)
	{
		printf("both params are required.\n\nmust be floating point\n\n");
		exit(2);
	}
	else
	{
		Usage();
		Polar(x, y, &r, &theta);
		ShowIt(r, theta);
	}

	a = AskQ();
	if(a == 1)
	{
		GetRec(&x, &y);
		Polar(x, y, &r, &theta);
<<<<<<< HEAD
=======
		ShowIt(r, theta);
>>>>>>> f44f9aa176aec1aa0209ce52363d47ac0787dd3f
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
<<<<<<< HEAD
	r = double* sqrt((x*x)+(y*y));
	theta = atan(y/x);
	printf("Distance from origin: %p\n", &*r);
	printf("Angle (in degrees) from x-axis: %p\n", &*theta);
=======
	double a, b;
	a = ((x * x)+(y * y));
	b = y / x;

	(*r) = sqrt(a);
	(*theta) = atan(b);

	return;
}

void ShowIt(double r, double theta)
{
	double rad = r;
	double ang = theta;

	printf("Distance from the origin: %lf\n", rad);
	printf("Angle (in degrees) from x-axis: %lf\n", ang);

>>>>>>> f44f9aa176aec1aa0209ce52363d47ac0787dd3f
	return;
}
