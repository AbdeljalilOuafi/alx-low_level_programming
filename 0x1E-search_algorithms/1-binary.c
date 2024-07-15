#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: array to be printed
 * @low: the first index in the array
 * @high: last element in the array
 * Return: Nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	for (; i <= high; i++)
	if (i == high)
	{
		printf("%d", array[i]);
	}
	else
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - use binary_search algo to search for a value.
 * @array: array to be printed
 * @size: size of the array.
 * @value: value to be searched for.
 * Return: index of the value, else -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		print_array(array, low, high);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}

