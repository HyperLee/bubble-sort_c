#include <stdio.h>

#define SIZE 10
//bubble sort
int main(void)
{
	int a[SIZE] = {2,4,6,7,80,66,44,99,100,3};
	int pass, i, hold;
	
	printf("original array:\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	
	//bubble sort
	for(pass = 1; pass < SIZE; pass++)
	{
		for(i = 0; i < SIZE - 1; i++)
		{
			if(a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			} 
		}
	}
	
	printf("\nbubble sort:\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}


