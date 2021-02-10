#include <stdio.h>
#include <math.h>

extern double x, result;

void  function()
{
	result = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
}