#include <stdio.h>
#include <math.h>

void main()
{   
    double x = 5;
    double f = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    printf("x = ");
    scanf("%lf", &x);
    f = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
    printf("f = %.4lf", f);
}


