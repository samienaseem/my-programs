#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter hthe value of n");
	scanf("%d",&n);
//	textcolour(GREEN);
	for (i=0;i<=n;i++)
	 {
	 	for(j=0;j<=n-2;j++)
	 	 {
	 		if(i-j==n/n||i+j==n/2||i==n/n||i==n-1||j-i==n/2||j+i==n+1)
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
