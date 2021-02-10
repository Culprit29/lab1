#include <stdio.h>
#include <math.h>

double function(double x);
void main()
{
	double f, x = 5;
	f = function(x);
	printf("x = %.4lf\n", x);
        printf("f = %.4lf\n\n", f);
	printf("x = ");
	scanf("%lf", &x);
	f = function(x);
	printf("f = %.4lf", f);
}

double function(double x)
{
	double f;
	f = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
	return(f);
}
