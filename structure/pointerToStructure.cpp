//Pointer to structure
#include<stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int roll;
		int marks;
	};
	struct student stu1={"suman",12,100},*ptr;
	printf("%s %d %d \n",stu1.name,stu1.roll,stu1.marks);
	ptr=&stu1;
	printf("Address is %p \n",ptr);
	printf("%s %d %d \n",(*ptr).name,ptr->roll,ptr->marks);
}
