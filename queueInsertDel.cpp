#include<stdio.h>
#include<conio.h>
#define max 5
int rear=-1;
int front=-1;
int queue[5];
void insert(int element);
void del();
void display();
int main()
{
	int ch,n;
	while(ch!=4)
	{
		printf(" 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the no.");
				scanf("%d",&n);
				insert(n);
				break;
			case 2:del();
				break;
			case 3:display();
				break;
			case 4:printf("Thank you");
				break;
			default:printf("Invalid Input");					
		}
	}
	
}
void insert(int element)
{
	if (rear == max-1)
	{
		printf("Overflow \n");
	}
	if (rear ==-1 && front == -1)
	{
		rear=front=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=element;
}
void del()
{
	int val;
	if (front == -1)
	{
		printf("Underflow \n");
	}
	else
	{
		val=queue[front];
		front =front+1;	
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d \t",queue[i]);
	}
	printf("\n");
}
