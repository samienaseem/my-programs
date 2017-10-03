#include<stdio.h>
int main()
{
	int a[100],i,j,m,n,temp;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++) 
	{
		m=j;
		    while(a[m-1]>a[m]&&m>0)
			{
				temp=a[m];
				a[m]=a[m-1];
				a[m-1]=temp;
				m--;
			}
	    
    }
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
