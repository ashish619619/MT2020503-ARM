/* To count the number of integers in an array of 20 elements */

#include <stdio.h>
int main()
{
	int arr[20];
	int count = 0;
	
	printf("enter 20 numbers \n");
	
	for (int i=0; i<20; i++)
	{
	scanf("%d", &arr[i]);
	if(arr[i]%2==0)
	{
	count++;
        }
        }
        
        printf("The count of even numbers is = %d \n", count);
	return 0;
}

