#include <stdio.h>
#include <stdlib.h>

/**
*main - returns alphabets boths lower and upper cases
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z'; ch++)
	putchar(ch);

for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

putchar('\n');
return (0);
}
