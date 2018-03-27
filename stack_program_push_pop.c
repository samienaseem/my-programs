#include<stdio.h>    
int top=-1;
void push(int x);
void pop(int y);
void display(int z);
 
void main()
{
    int ch,n;
    printf("enter the maxaimun elemnts\n");
    scanf("%d",&n);
    int stack[n];
    
    while(1)    //infinite loop, will end when choice will be 4
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: push(n);
                    break;
            case 2: pop(n);
                    break;
            case 3: display(n);
                    break;
            case 4: exit(0);
            
            default: printf("\nWrong Choice!!");
        }
    }
}
 
void push(int x)
{
    int val,stack[x];
    if(top==x-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
 
void pop(int y)
{
	int stack[0];
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
 
void display(int z)
{
    int i,stack[z];
    
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
