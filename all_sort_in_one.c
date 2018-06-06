#include<stdio.h>
void BubbleSort(int b[],int m);
void SelectionSort(int s[],int m);
void InsertionSort(int in[],int m);
void QuickSort(int q[],int f,int l);
int main()
{
	int n,ch,i;
	printf("enter the elements of array  :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements of array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	do {
		printf("\n\n");
		printf("enter your choice\n");
		printf("1. bubble sort\n");
		printf("2. selection sort\n");
		printf("3. insertion sort\n");
		printf("4. quick sort\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				BubbleSort(arr,n);
				break;
			case 2:
				SelectionSort(arr,n);
				break;
			case 3:
				InsertionSort(arr,n);
				break;
			case 4:
				QuickSort(arr,0,n-1);
				printf("\nAfter Qick sort\n");
				for(i=0;i<n;i++)
				printf("[%d] ",arr[i]);
				break;
		}
		
	} while(1);
}
void BubbleSort(int b[],int m) {
	int i,j,temp=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<m-1-i;j++)
		{
				if(b[j]>b[j+1])
				{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				
				}
		}
	}
			printf("the given array is");
	for(i=0;i<m;i++)
	{
		printf("[%d]",b[i]);
	}
}
void SelectionSort(int s[],int m) {
	int i,j,temp=0;
		for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
		
	}
	printf("the sorted array through selection sort is\n");
	for(i=0;i<m;i++) {
		printf("[%d]",s[i]);
	}
}
void InsertionSort(int in[],int m) {
	int i,j,temp;
		for(i=1;i<m;i++) // for boundry inital value=1
		{
			for(j=i;j>0;j--)
			{
				if(in[j-1]>in[j])
				{
					temp=in[j];
					in[j]=in[j-1];
					in[j-1]=temp;	
				}
			}	
	    }
	for(i=0;i<m;i++)
	{
		printf("[%d]",in[i]);
	}
	
}
void QuickSort(int q[],int f,int l) {
	int j,i;
	
		if(f<l)
		{
			j=partition(q,f,l);
			QuickSort(q,f,j-1);
			QuickSort(q,j+1,l);
		}
		
		
 
}


int partition(int a[],int l,int u)
{

	int v,i,j,temp;
	v=a[l];

	i=l;
	j=u+1;
	do
	{
		do
		i++;
		while(a[i]<v&&i<=u);
		do
		j--;
		while(v<a[j]);
		if(i<j) {
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	a[l]=a[j];
	a[j]=v;
	
	return(j);
	}
 

