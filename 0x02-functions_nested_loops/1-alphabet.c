#include "main.h"

/**
 * print_alphabet - Entry point for program execution.
 * Description: a function that prints the alphabet
 * in lowecase followed by a new line
 * Return: void. No return value
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
