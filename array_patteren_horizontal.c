#include<stdio.h>
int main()
{
	int arr[10],i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	 printf("enter the elements of array\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	for(j=0;j<n;j++)
	{
		for(i=n;i>0;i--)
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
