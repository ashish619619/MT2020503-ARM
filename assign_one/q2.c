/* To find the largest among 20 integers of an array */

#include <stdio.h>
int main()
{
	int arr[15];
	int largest = 0;
	
	printf("enter 15 numbers \n");
	
	for (int i=0; i<15; i++)
	{
	scanf("%d", &arr[i]);
	if(arr[i] > largest)
	{
	largest = arr[i];
        }
        }
        
        printf("The largest number of the array is = %d \n", largest);
	return 0;
}

