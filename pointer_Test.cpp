// BE SOECIFIC WITH ADDRESS AND VALUES .FOR ADDRESS UDE %P AND %D FOR VALUES.
//PA RETURNS THE ADDRESS AND *PA RETURNS THE VALUE.
#include<stdio.h>
int main()
{
	int a=5;
	int *pa;
	pa=&a;
	int **ppa;
	ppa=&pa;
	printf("Address of a =%p \n",&a);
	printf("value of pa =address of a = %p\n",pa);
	
	printf("Value of a %d And Value of *pa %d\n",(*pa),a);
	printf("Address of pa =%p \n ",&pa);
	printf("Address of ppa %p \n",(&ppa));
	printf("value of pa is the address of a %p \n",(*ppa));
	
}
