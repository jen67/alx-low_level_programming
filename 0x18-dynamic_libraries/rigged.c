#include <stdio.h>

/* Mock the drawing function of the gm binary */
int* draw_numbers(void)
{
	static int winning_numbers[6] = {9, 8, 10, 24, 75, 9};
	return winning_numbers;
}
