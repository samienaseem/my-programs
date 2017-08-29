#include<stdio.h>
int main()
{
	int a[10],i,j,m,n,temp;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//for(i=0;i<=n;i++)
	//{   
		for(m=1;m<=n;m++) // for boundry inital value=1
		{
			for(j=m;j>0;j--)
			{
				if(a[j-1]>a[j])
				{
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
					
				}
			}
			
	    }
	
	//}
	for(i=0;i<=n;i++)
	{
		printf(" [%d] ",a[i]);
	}
}
