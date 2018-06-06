#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void input(int data)
{
	struct Node *temp=malloc(sizeof(struct Node));

	if(head==NULL)
	{
		temp->data=data;
		temp->next=NULL;
		head=temp;
		return ;
	}

	temp->data=data;
	temp->next=head;
	head=temp;
}

void insertAtTail(int data)
{
	struct Node *temp=malloc(sizeof(struct Node));
				temp->data=data;
				temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return ;
	}

	struct Node *temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}

	temp1->next=temp;
}
void InsertAtTheMiddle(int data,int var) {
	//int *a;
	struct Node *temp=malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	

	
	struct Node *temp2=head;
	while(temp2->data!=var) {
		temp2=temp2->next;
	}
	struct Node *a;
	a=temp2->next;
	temp2->next=temp;
	temp->next=a;
	
}


void print()
{
	struct Node *temp=head;
    while(temp!=NULL)
	{
		printf("[%d] ",temp->data);
		temp=temp->next;
	}
}


int main()
{
	input(1);
	input(2);
	input(3);
	insertAtTail(4);
	insertAtTail(8);
	InsertAtTheMiddle(5,2);
	InsertAtTheMiddle(9,3);
	InsertAtTheMiddle(10,4);
	print();
}
