#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initialises it with a specific char
 *
 * @size: int input
 * @c: char input
 *
 * Return: NULL if size = 0
 * pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int j = 0;

if (size != 0)
ar = malloc(size * sizeof(char));
else
return (NULL);
if (ar == NULL)
return (NULL);
while (j < size)
{
ar[j] = c;
j += 1;
}
return (ar);
}
