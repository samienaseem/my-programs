#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter hthe value of n");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	 {
	 	for(j=0;j<=n;j++)
	 	 {
	 		if(i+j>=n/2&&i-j<=n/2&&j-i<=n/2&&i+j==(n/2)*3)
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
