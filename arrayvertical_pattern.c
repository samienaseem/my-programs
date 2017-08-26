#include<stdio.h>
int main()
{
	int a[20],i,j,n;
	 printf("enter the number");
	 scanf("%d",&n);
	 printf("enter the elements of array\n");
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&a[j]);
	 }
	 printf("\n\n");
	for(i=n;i>0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>=i)
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
}
