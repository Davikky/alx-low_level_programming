#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i, sum = 0;

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);

	return (sum);
}
