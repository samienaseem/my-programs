#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j-1]>a[j])
			//a[j]=(a[j+1]+a[j])-(a[j+1]=a[j]);
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
		for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	
	return 0;

}
