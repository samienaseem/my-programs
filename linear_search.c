#include <stdio.h>
 
int main()
{
   int search, i, n,count=0;
 
   printf("Enter the number of elements in array : ");
   scanf("%d",&n);
   int array[n];
   printf("\nEnter %d integer : \n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("\nEnter the number to search : ");
   scanf("%d", &search);
 
   for (i = 0; i < n; i++)
   {
      if (array[i] == search)    
      {
      	 count++; 
         printf("%d is present at location : %d.\n", search, i+1);
      }
       else if(i>=n-1) {
	  printf("%d is not present in array.\n", search);
	 exit(0);
		}
   }
   printf("%d : is present in array : %d times\n",search,count);
  
   return 0;
}
