#include "sort.h"

/**
 * selection_sort - This function uses selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i = 0, j = 0, position = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[position])
				position = j;
		}
		if (position != i)
		{
			aux = array[i];
			array[i] = array[position];
			array[position] = aux;
			print_array(array, size);
		}
	}
}
