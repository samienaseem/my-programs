#include<stdio.h>
int main()
{
	int a[20],i,j,n;
	printf("enter the number\t");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[j]=(a[i]+a[j])-(a[i]=a[j]);
			}
		}
		
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
