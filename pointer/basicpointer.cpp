//program to perform basic of pointer
#include<stdio.h>
int main()
{
	int a=5,*pa,**ppa;
	pa=&a;
	ppa=&pa;
	printf("value of a= %d \n",*pa,a);
	printf("address of a =Value of pa=%p \t %p \n",*ppa,&a);
	printf("value of ppa == add of pa %p \n",ppa);
	printf("Address of a using & is %p \n",&a);
	printf("Address of ppa is (using &)%p \n",&ppa);
	return 0;
	//wheneven we will require address we will use %p and for value we will be using %d %f .
}

