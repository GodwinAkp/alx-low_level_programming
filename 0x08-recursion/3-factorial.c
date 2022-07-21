#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int
 *
 * Return: 0 if n is lower than 0
 * or -1 to indicate an error
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
