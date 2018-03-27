#include<stdio.h>
int main() {
	int i,j,a[10][10],n=0;
	printf("enter the total number of elements of array \n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is \n"); 
	for(i=0;i<n;i++ ) {
		for(j=0;j<n;j++) {
			printf(" [%d] ",a[i][j]);
		}
		printf("\n");
	}
	int choice,x,y;
	do {
		printf("enter your choice\n");
		printf("1. first diagnal elements\n ");
		printf("2. second diagnal elements \n");
		printf("3. rows elements\n");
		printf("4. columns elements");
		printf("\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				printf("first diagnal elements are\n");
				for(i=0;i<n;i++) {
					for(j=0;j<n;j++) {
						if(i==j) 
						{
							printf(" [%d] ",a[i][j]);
						}
						else
						printf("  ");
					}
					printf("\n");
				}
				printf("\n\n");
				break;
			case 2:
			    printf("second diagnal elements are\n");
			      for(i=0;i<n;i++) {
			      	for(j=0;j<n;j++) {
			      		if(i+j==n-1)
			      		{
			      			printf(" [%d] ",a[i][j]);
					    }
					    else
					    printf("  ");
					  }
					  printf("\n");
				  }
				  printf("\n\n");
				  break;
			case 3:
				x=1;
				printf("enter the row number whose element to be print\n");
				scanf("%d",&x);
				if(x<=n)
				{
					for(i=0;i<n;i++) {
						printf(" [%d] ",a[x-1][i]);
					}
				}
			    printf("\n\n");
			    break;
			case 4:
				y=1;
				printf("enter the column number whose elements to be print\n ");
				scanf("%d",&y);
				if(y<=n)
				{
					for(j=0;j<n;j++) {
						printf(" [%d] ",a[j][y-1]);
						printf("\n");
					}
				}
				printf("\n\n");
			
		}
	}
	while(choice!=0);
	return 0;
	
 }

