/*
 * PROBLEM DESCRIPTION:
 * Program to prompts user for the n numbers.
 * once the user is done entering those numbers, 
 * This program sorts and displays them in ascending order.
 */

/*
 * Tasks to undertake:
 * ---> Task0: Get user to enter 'n' inputs of integer.
 * ---> Task1: Sort entered numbers in ascending order.
 * ---> Task2: Display sorted numbers,
 */

#include <stdio.h>
#include <stdlib.h>
#include "ascending_header.h"
/** Main Function Description:
 * main - gets user to enter numbers
 *	  calls a function to sort numbers in ascending order
 *	  then prints the new order
 * 
 */

int main(void)
{
	int size; /*To hold number of input user wants to make*/
	
	int i, num, *num_array = NULL;

	/* Task0 */
	printf("How many numbers do you intend to sort?: ");
	scanf("%d", &size);
	num_array = (int *)malloc(sizeof(int) * size);
	printf("\n-----------------------\n");
	printf("Enter the numbers to be sorted.\n");
	for (i = 0; i < size; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &num);
		printf("\n");
		num_array[i] = num;
	}
	printf("\n\n--------------------------\n");
	printf("Before sorting:\n");
	for (i = 0; i < size; i++)
	{
		printf("num_array[%d] = %d\n", i, num_array[i]);
	}

	/* Task1 */
	ascending_order_bubble_sort(num_array, size);

	/* Task2 */
	printf("\n\n--------------------------\n");
	printf("After sorting:\n");
	for (i = 0; i < size; i++)
	{
		printf("num_array[%d] = %d\n", i, num_array[i]);
	}

	return (0);
}

