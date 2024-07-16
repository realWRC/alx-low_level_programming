#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 * Return: The index of the value if found else -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lt = 0;
	size_t rt = size - 1;
	size_t mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (lt <= rt)
	{
		printf("Searching in array: ");
		for (i = lt; i <= rt; i++)
		{
			printf("%i", array[i]);
			if (i != rt)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = lt + ((rt - lt) / 2);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			lt = mid + 1;
		}
		else
		{
			rt = mid - 1;
		}
	}
	return (-1);
}
