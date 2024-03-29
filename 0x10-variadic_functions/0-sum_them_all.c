#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: n args
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	if (n)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
	}
	return (sum);
}
