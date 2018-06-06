#include<stdio.h>
void sort(int[],int);
int main() {
	int i,n;
	printf("enter the total number of elements : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d Elemeents of Array",n);
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	 
	 sort(arr,n);
	return 0;
}
void sort(int a[],int m) {
	int j,i,temp=0;
	printf("Sorting\n");
	for(i=0;i<m;i++) {
		for(j=i+1;j<m;j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sorted array is");
	for(i=0;i<m;i++) {
		printf("%d",a[i]);
	}
	}
}

