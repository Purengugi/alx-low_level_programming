#include <stdio.h>
/**
 * add - adds two integers
 * @a: int
 * @b: int
 * Return: addition result
 */
int add(int a, int b)
{
	int res = 0;

	res = a + b;
	return (res);
}
/**
 * sub - difference between two integers
 * @a: int
 * @b: int
 * Return: difference
 */
int sub(int a, int b)
{
	int res = 0;

	res = a - b;
	return (res);
}
/**
 * mul - product of two integers
 * @a: int
 * @b: int
 * Return: product
 */
int mul(int a, int b)
{
	int res = 0;

	res = (a * b);
	return (res);
}
/**
 * _div - divides two integers
 * @a: int
 * @b: int
 * Return: division result
 */
int _div(int a, int b)
{
	int res = 0;

	if (b != 0)
		res = a / b;
	return (res);
}
/**
 * mod - finds the remainder of division
 * @a: int
 * @b: int
 * Return: remainder
 */
int mod(int a, int b)
{
	int res = 0;

	res = a % b;
	return (res);
}
