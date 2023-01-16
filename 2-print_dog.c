#include "dog.h"
/**
 * print_dog - prints dog details
 * @d: new struct instance
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->age == NULL)
		printf("Age: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
