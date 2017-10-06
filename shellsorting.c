#include<stdio.h>
int main()
{
	int a[30],i,j,n,m,k,temp=0;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(m=n/2;m>0;m=m/2)
	{
		for(j=m;j<n;j++)
		{
			if(a[j-m]>a[j])
			{
				temp=a[j-m];
				a[j-m]=a[j];
				a[j]=temp;
				for(k=(j-m)-m;k>=0;k--)
				{
					if(a[k]>=a[k+m])
					{
						temp=a[k];
						a[k]=a[k+m];
						a[k+m]=temp;
					}
				}
			}
		}
	//	m=m/2;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
