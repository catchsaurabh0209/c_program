//program to perform different operation on single linked list.
#include<stdio.h>
#include<stdlib.h>//for malloc,calloc and realloc
struct node{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);
int main()
{
	struct node *start=NULL;
	int data,pos,item,choice;
	while(1)
	{
		printf("Enter the choice");
		printf("1. Create list \n");
		printf("2. Display \n");
		printf("3. Count \n");
		printf("4. Search \n");
		printf("5. Add to empty list /Add at beginning \n");
		printf("6. Add at end \n");
		printf("7. Add after node \n");
		printf("8. Add at position \n");
		printf("9. Add before node \n");
		printf("10. Delete \n");
		printf("11. Reverse \n");
		printf("12. Exit \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: start=create_list(start);
			break;
			case 2:display(start);
			break;
			case 3:count(start);
			break;
			case 4:printf("Enter the element to be inserted");
			scanf("%d",&data);
			search(start,data);
			break;
			case 5:printf("Enter the element to be inserted");
			scanf("%d",&data);
			start=addatbeg(start,data);
			break;
			case 6:printf("Enter the element to be inserted");
			scanf("%d",&data);
			start=addatend(start,data);
			break;
			case 12:exit(1);
			break;
			default:printf("Invalid Choice");
					
		}
		
	}
	
}
void display(struct node *start)
{
	struct node *p=start;
	if(start == NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("List is - \n");
		while(p != NULL)
		{
		printf("%d",p->info);
		p=p->link;
		}
	}
	
}
void count(struct node *start)
{
	struct node *p=start;int counter=0;
	if(start == NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("List is - \n");
		while(p != NULL)
		{
			counter++;
		}
	}
	printf("Total no. of elements are %d",counter);
}
void search(struct node *start,int data)
{
	struct node *p=start;int flag=0;
	if(start == NULL)
	{
		printf("List is empty");
	}
	else
	{
		if(data == p->info)
		{
			flag=1;
		}
	}
	if(flag == 1)
	{
		printf("Search Successful");
	}
	else
	{
		printf("Sorry element not found");
	}
	
}
struct node *addatbeg(struct node *start,int data)
{
	struct node *p=start,*tem;
	tem=(struct node *)malloc(sizeof(struct node));
	tem->link=p->link;
	tem->info=data;
	start=tem;
	return start;
}
