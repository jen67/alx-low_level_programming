#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this prints "programming is positive, zero, or negative
 * Return: 0
 * /
 int main(void)
 {
 int n;
 int l;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
 l = n % 10;

 if (l > 5)
 {
         printf("Last digit of %d is %d and is greater 5\n", n, l);
}
else if (l == 0)
{
         printf("Last digit of %d is %d and is 0\n", l);
}
else
{
