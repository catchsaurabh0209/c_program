//Returning a pointer to structure from a function
//	VERY GOOD PROGRAM
#include<stdio.h>
#include<stdlib.h>
struct student {
	char name[20];
	int roll;
	int marks;
};
void display(struct student *);
struct student *func();
struct student *ptr; //global pointer
int main()
{
	struct student *stu;
	stu=func();
	display(stu);
	free(stu);
}
struct student *func() //watch out this function 
{
	ptr=(struct student*)malloc(sizeof(struct student));
	ptr->roll=15;
	ptr->marks=99;
	
	return ptr;
}
void display(struct student *stu1)
{
	printf("%s %d %d",stu1->name,stu1->roll,stu1->marks);
}

