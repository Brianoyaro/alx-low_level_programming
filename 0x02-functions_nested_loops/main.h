#include <stdio.h>
void print_alphabet(void);
void print_alphabet(void)
{
        int a;
        for (a = 0; a < 26; a++)
        {
                putchar('a' + a);
        }
        putchar('\n');
}
