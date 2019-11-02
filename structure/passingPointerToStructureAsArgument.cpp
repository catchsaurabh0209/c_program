//passing pointer to structure as arguments
#include<stdio.h>
struct student
	{
		char name[20];
		int roll;
		int marks;
	};
void display1(int a);
void display2(struct student *stu1);	
int main()
{
	struct student stu1={"saurabh",12,99
	};
	display1(stu1.roll);
	display2(&stu1);	
}
void display1(int a)
{
	printf("Roll No. Is ---- %d \n",a);
}
void display2(struct student *stu1)
{
	printf("%s %d %d",stu1->name,stu1->roll,stu1->marks);
}
