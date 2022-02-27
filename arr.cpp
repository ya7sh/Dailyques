#include <stdio.h>
int main()
{
	int greatest;
	int i;
	int size;
	printf("Enter the size of array");
	scanf("%d",&size);
	int numbers[size];
	
	
	for(i=0;i<size;i++)
	{
		printf("\n Enter a number");
		scanf("%d",&numbers[i]);	
	}
	greatest=numbers[0];
	for(i=1;i<size;i++)
	{
		if(numbers[i]>greatest)
		{
			greatest=numbers[i];
		}
	}
	printf("greatest number is %d",greatest);
	return 0;
}

