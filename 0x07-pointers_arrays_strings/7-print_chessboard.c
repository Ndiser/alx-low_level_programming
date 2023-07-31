#include "main.h"
/**
 * print_chessboad - entry point
 * @a: array
 * Return: always 0 (success)
 */
void print_chessboad(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
