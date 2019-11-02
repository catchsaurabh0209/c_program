//Returning a structure variable from function
#include<stdio.h>
struct student
	{
		char name[20];
		int roll;
		int marks;
	};
struct student change(struct student stu1);	
int main()
{
	struct student stu1={"saurabh",12,99
	};
	printf("%s %d %d before calling \n",stu1.name,stu1.roll,stu1.marks);
	stu1=change(stu1);
	printf("After calling %s %d %d",stu1.name,stu1.roll,stu1.marks);
}
struct student change(struct student stu1)
{
	stu1.roll=(stu1.roll)+3;
	return stu1;
}
