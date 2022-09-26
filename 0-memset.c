#include "main.h"

/**
 * _memset - fills a memory with constant byte
 * @n: address to memory block
 * @s: char to be used
 * @b: number of bytes to be used
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
			n--;
	}
	return (s);
}
