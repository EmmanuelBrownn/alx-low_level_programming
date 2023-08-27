#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a sentence before the main
 * function is executed
 */
void first(void)
{
 printf("You're the  best! and yet, you must allow,\n");
 printf("I bear  my house upon my back!\n");
}
