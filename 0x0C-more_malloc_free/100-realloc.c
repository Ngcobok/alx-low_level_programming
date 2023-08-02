#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: it is the size, in bytes,
 * of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i, o = new_size;
	char *oldc = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		o = old_size;
	for (i = 0; i < o; i++)
		c[i] = oldc[i];
	free(ptr);
	return (c);
}
