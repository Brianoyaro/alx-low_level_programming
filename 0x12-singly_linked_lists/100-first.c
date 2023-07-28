#include <stdio.h>
void beforemain(void) __attribute__ ((constructor));
/**
 * beforemain - prints to stdout before main function is called
 */
void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
