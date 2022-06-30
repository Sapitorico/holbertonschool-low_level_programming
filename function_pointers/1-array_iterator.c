#include "function_pointers.h"
/**
 * array_iterator - funtion axecutes fucntion in array
 * @array: array
 * @size: aize of array
 * @action: perfonre to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*array++);
}
