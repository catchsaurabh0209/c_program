//program to perform basic of structure
#include<stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int roll;
		int marks;
	};
	struct student stu1={"suman",12,100};
	printf("%s %d %d",stu1.name,stu1.roll,stu1.marks);
}
