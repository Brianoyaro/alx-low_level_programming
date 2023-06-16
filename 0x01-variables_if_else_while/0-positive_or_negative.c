#include <stdio.h>
#include<time.h>
#include<stdlib.h>
/*more headers go here*/

/*betty style doc for function main goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code goes here*/
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
