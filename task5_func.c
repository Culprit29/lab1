#include <stdio.h>
#include <math.h>

double function(double x)
{
	double f;
	f = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
	return(f);
}

