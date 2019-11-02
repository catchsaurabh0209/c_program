//Performing Nested structure
#include<stdio.h>
int main()
{
	struct date{
		int day;
		int month;
		int year;
	};
	struct student{
		char name[20];
		int roll;
		struct date birthday;
	};
	struct student stu1={"suman",12,{2,9,1999}};
	printf("%d",stu1.birthday.day);
}
