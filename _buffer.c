#include "main.h"

/**
 * _littleBuffer - Buffer
 * @size: Size
 * Return: A pointer
 */

char *_littleBuffer(int size)
{
	char *s;

	s = malloc(1024 * size);
	if (s == NULL)
		return (NULL);
	return (s);
	free(s);
}
