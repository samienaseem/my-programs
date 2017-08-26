#include<stdio.h>
int main()
{
	int arr[10],i,j;
	printf("enter the elements of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=10;j>0;j--)
		{
			if(arr[i]>=j)
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
