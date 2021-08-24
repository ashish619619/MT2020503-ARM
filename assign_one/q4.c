/* To sort the elements of an array in ascending order */

#include <stdio.h>
#define size 20 
int main()
{
	int arr[size];
	int temp =0;
	
	printf("enter 20 numbers \n");
	
	for (int i=0; i<size; i++)
	{
	scanf("%d", &arr[i]);
        }
        
        for(int i=0; i<(size-1); i++)
        {
        for(int j=0; j<(size-i-1); j++)
        {
        if(arr[j]>arr[j+1])
        {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        }
        }
        }
        
        printf("The elements of the array in ascending order is: \n"); 
        for(int k=0; k<size; k++)
        { 
        printf("%d \n", arr[k]);
        }
        
	return 0;
}
