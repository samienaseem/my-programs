#include<stdio.h>
int main() {
	int i,n,j,f=0,l,m,search,temp=0;
	printf("enter the total number of elements : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d Elements of Array\n",n);
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
    }
   printf("Sorting\n");
    for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("the sorted Array is\n");
	for(i=0;i<n;i++) {
		printf(" %d \n",arr[i]);
	}
	printf("Enter the element to be searched : ");
	scanf("%d",&search);
	l=n;
	while(f<=l) {
		m=(f+l)/2;
		if(arr[m]==search){
		printf("%d element found at %d location",search,m+1);
		break;
	}
		
		else if(arr[m]>search) {
			l=m-1;
		}
		else 
		f=m+1;
    }
		if(f>=l)
		printf("%d is not present in Array",search);
		
	
	return 0;
}


