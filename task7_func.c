#include <stdio.h>
#include <math.h>
#include "func.h"

double x, result;

void  function()
{
	result = (sqrt(x * 2.0 + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2);
}