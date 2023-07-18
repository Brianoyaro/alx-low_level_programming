#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints struct dog
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	/*check if *d was initialised well else return nothing*/
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (!(d == NULL))
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
