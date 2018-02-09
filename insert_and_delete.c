#include<stdio.h>
void insertion(int n,int a[]);
void deletion(int n,int a[]);
int loc;
int main() {
	int option;
	int a[30],i,n;
	
	printf("total number of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	do {
		printf("choose an option\n");
		printf("1 insert and element in an array\n");
		printf("2 delete an element from an array\n");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1: insertion(n,a);
			break;
			case 2:deletion(n,a);
			break; 
			default:
			printf("you have entered wrong option");
	    }
	}
	while(option!=0);
	return 0;
	
	
}
void insertion(int n,int a[]) {
	int i,element;
	printf("enter the element to be inserted\n");
	scanf("%d",&element);
	printf("enter the location\n");
	scanf("%d",&loc);
	 for (i = n; i >= loc; i--) {
      a[i] = a[i - 1];
   }
 
   n++;
   a[loc - 1] = element;
   printf("the new array is \n");
    for (i =0;i<n;i++)
      printf(" %d \n", a[i]);


}
void deletion(int n,int a[]) {
	int i;
	printf("enter the location to delete an element\n");
	scanf("%d",&loc);
	 while (loc<=n) {
      a[loc-1]=a[loc];
      loc++;
   }
   n--;  // No of elements reduced by 1
 
   printf("the new array is \n");
   for (i=0;i<=n;i++)
      printf(" %d \n",a[i]);
}
