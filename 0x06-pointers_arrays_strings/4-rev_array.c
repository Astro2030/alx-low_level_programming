#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input value
 * @n:input value
 */

void reverse_array(int *a, int n)
{       
	int i, t;
        
	for(i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
