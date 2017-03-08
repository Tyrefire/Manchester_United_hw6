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
	double r = 0.0, theta = 0.0;

	x = atof(argv[2]);
	y = atof(argv[3]);

	printf("Usage ./task1 x-coordinate y-coordinate\n");
	if(argc != 3)
	{
		if(x == 0.0 || y == 0.0)
		{
			Usage();
		}
		else
		{
			Usage();
		}
	}

	else
	{
		printf("The polar coordinates are:\n");
		Polar(x, y, &r, &theta);
		ShowIt(r, theta);
		a = AskQ();
	do
	{
		if(a == 0)
		{
			break;
		}
		else
		{
			GetRec(&x, &y);
			Polar(x, y, &r, &theta);
			ShowIt(r, theta);
			a = AskQ();
		}
	}
	while(a == 1);
	}


	printf("Done!\n");


	return 0;
}

/* Function Defenitions */
void Usage(void)
{
	printf("both params are required.\nmust be floating point\n");
	exit(1);

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
	double a, b;
	a = ((x * x)+(y * y));
	b = y / x;

	(*r) = sqrt(a);
	(*theta) = atan(b);
	(*theta) = (*theta) * 180 / 3.14;

	return;
}

void ShowIt(double r, double theta)
{
	double rad = r;
	double ang = theta;

	printf("Distance from the origin: %lf\n", rad);
	printf("Angle (in degrees) from x-axis: %lf\n", ang);
	return;
}
