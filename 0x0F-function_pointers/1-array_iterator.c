#include <stdio.h>
/**
 * array_iterator - function given as a parameter on each element
 * of an array
 * @array: array pointer
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
