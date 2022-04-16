
/**
In the following program we are initializing a variable (max_element) 
with the first element of given array and then we are comparing that variable 
with all the other elements of the array using loop, whenever we are getting 
an element with the value greater than max_element, we are moving that element 
to max_element and moving further with the same approach to get the largest 
element in the max_element variable.
*/

#include <stdio.h>
#include <stdlib.h>
#include "largest_header.h"
int main(void)
{
    int size; /*To hold number of input user wants to make*/

        int i, num, *num_array = NULL;

        /* Task0 */
        printf("Enter size of array: ");
        scanf("%d", &size);
        num_array = (int *)malloc(sizeof(int) * size);
        printf("\n-----------------------\n");
        printf("Enter the elements in the array.\n");
        for (i = 0; i < size; i++)
        {
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("\n");
                num_array[i] = num;
        }

	num = get_largest_element(num_array, size);

	printf("Largest element is %d\n", num);

	return (0);
}
