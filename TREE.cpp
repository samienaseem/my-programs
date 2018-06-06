#include<stdio.h>

#include<conio.h>

#include<math.h>

int main()

{

int tree[30],NODE,l,i,j,count=0;
	

printf("Enter total number of levels in Binary Tree:");

scanf("%d",&l);

NODE=pow(2,l+1)-1;

printf("Total possible nodes= %d \n",NODE);

if(NODE>30)

printf("\nSorry! Exceeded array limit.");

else

{

printf("Enter %d nodes of the tree\n",NODE);

for(i=0;i<NODE;i++)

{

scanf("%d",&tree[i]);

}

for(i=0;i<=l;i++)

{

printf("Element(s) at level[%d]= ",i);

for(j=0;j<pow(2,i);j++)

{

printf("%d ",tree[count]);
 
count++;

}

printf("\n");

}

}

return 0;

getch();

}

