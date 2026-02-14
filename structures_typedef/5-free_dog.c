#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to dog_t struct
 *
 * Description: frees the memory allocated for a dog,
 *              including its name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* sərbəst burax name və owner */
	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	/* sərbəst burax struct-un özünü */
	free(d);
} 
