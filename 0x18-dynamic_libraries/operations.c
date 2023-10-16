/**
 * operations.c - Functions to perform basic arithmetic operations.
 */

#include <stdio.h>

/**
 * add - a function that adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - a function that subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference between a and b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - a function that multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - a function that divides two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the division of a by b, or
 * 0 if divisor is zero.
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);  /* Simple error handling */
}

/**
 * mod - a function that gets the modulus of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The modulus of a by b, or 0
 * if b is zero.
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0); /* Simple error handling */
}
