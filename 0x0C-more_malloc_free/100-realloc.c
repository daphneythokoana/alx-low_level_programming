#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: the size in bytes of allocated space for ptr
 * @new_size: the size in bytes for the new memory block
 *
 * Return: if new_size == old_size - ptr
 *      if new_size == 0 and ptr is not NULL - NULL
 *      - a pointer to the allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem =malloc(new_size);
		if (mem == NULL)
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;
	for (index =0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;
	free(ptr);
	return (mem);
}
