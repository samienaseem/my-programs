#include<stdio.h>
#include<conio.h>
#define max 7

int main()
{
	int Q[max]={0},f=0,r=0,choice;
	
	void Enqueue()
	{
	    int element;
	    if(r==max)
	    {
	        printf("Overflow\n");
	    }
	    else
	    {
	        printf("Enter Element:");
	        scanf("%d",&element);
	        Q[r++]=element;
	        printf("Enqueued\n");
	    }
	 }
	 void Dequeue()
 	{
	    if(r==f)
	    {
	        printf("Underflow\n");
	    }
	    else
	    {
	        f++;
	        printf("\nDequeued\n");
	    }
	}
	void Display()
	{
	    int i;
	    if(f==r)
	    {
	        printf("Empty\n");
	    }
	    else
	    {
	        for(i=f;i<max;i++)
	        {
	            printf("%d\t ",Q[i]);
	        }
	        printf("\n");
	    }
	}
	do
	{
		printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
		printf("Enter the choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: Enqueue();
					break;	
			case 2: Dequeue();
					break;
			case 3: Display();
					break;
			case 4: return 0;
			default: printf("Select among 1,2,3 or 4 only\n");
		}
	}
	while(1);
	return 0;
}

