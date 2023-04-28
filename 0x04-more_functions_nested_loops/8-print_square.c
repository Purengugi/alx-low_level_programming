#include "main.h"

/**
 * print_square - prints a square
 * @n: number of # to be printed on each line
 *
 * Return: void
 */
void print_square(int n)
{
        int i = 0, j;

        if (n <= 0)
        {
                _putchar('\n');
                return;
        }

        while (i < n)
        {
                j = 0;
                while (j < n)
                {
                        _putchar('#');
                        j++;
                }
                _putchar('\n');
                i++;
        }
}

