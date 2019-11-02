// Performing free()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int *)malloc(1*sizeof(int));
	scanf("%d",ptr);
	printf("%d \n",*ptr);
	free(ptr);
	printf("%d",*ptr);//just for test (garbage value will be displayed in output)
}
