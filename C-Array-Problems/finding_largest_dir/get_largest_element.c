/**
 *
 */

int get_largest_element(int *array, int size)
{
	int i, largest = array[0];

	for (i = 1; i < size; i++)
	{
		if (array[i] > largest)
			largest = array[i];
	}

	return (largest);
}
