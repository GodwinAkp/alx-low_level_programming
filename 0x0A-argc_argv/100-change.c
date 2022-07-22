#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
int i, a, d;

i = 0, d = 0, a = 1;
if (*s == '-')
i++;
for (; *(s + i) != 0; i++)
{
d = isdigit(*(s + i));
if (d == 0)
{
a = 0;
break;
}
}
return (a);
}
/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int j, s, coins, cents, d;
int c[5] = {25, 10, 5, 2, 1};

s = 1, j = 0, coins = 0;
if (argc == 2)
{
if (_isnumber(argv[1]))
{
s = 0, cents = atoi(argv[1]);
if (cents >= 0)
{
while (cents != 0)
{
d = cents / c[j];
if (d == 0)
{
j++;
}
else
{
coins += d;
cents -= (d *c[j]);
}
}
}
}
}
if (s == 0)
printf("%i\n", coins);
else
printf("%s\n", "Error");
return (s);
}
