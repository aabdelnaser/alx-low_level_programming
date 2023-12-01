#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n : No. of parameterss passed to the function.
 * @... : A variable to calculate the sum.
 *
 * Return : 0 if n = 0.
 * 	    Otherwise, sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	sum = 0;

	va_start(ap, n);

	for(i = 0; i < n; i++)
		sum = sum + va_arg(ap,int);

	va_end(ap);

	return (sum);
}
