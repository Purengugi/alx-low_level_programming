 #include "main.h"

 /**
 * print_triangle - Prints a triangle made of '#' characters with a given size 'size'.
 *
 * @size: The size of the triangle to print.
 *
 * Return: void.
 */

void print_triangle(int size)
{

	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		 _putchar('\n');
		i++;
	}
	if (i == 1)
{
		_putchar('\n');
}
}
