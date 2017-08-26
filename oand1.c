#include<stdio.h>
int main()
{
	int arr[45],i,n,s=0,m=1,sum=0;
	printf("enter the value of n");
	scanf(" %d ", &n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf(" %d ", arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	for(i=n-1;i>n;i--)
	{
		if(i>sum)
		{
			arr[i]=s;
		}
		else
		{
			arr[i]=m;
		}
		printf("array=%d",arr[i]);
	}
	return 0;
}
