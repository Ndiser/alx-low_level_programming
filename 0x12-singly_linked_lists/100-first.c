#include <stdio.h>

void first(void)__atribute__((constructor));
/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("you're best! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
