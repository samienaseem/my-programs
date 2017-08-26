#include<stdio.h>
int main()
{
	int arr[20],i,num=0,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		num=num*10+arr[i];
			printf("the number=%d\n",num);
	}
	printf("the number=%d",num);
}
