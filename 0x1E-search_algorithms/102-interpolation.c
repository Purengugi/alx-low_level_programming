#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
 * If value is not present in array or if array is NULL
 * your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if ((size_t)pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}
	return (-1);
}
