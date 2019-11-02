// function returning pointer
#include<stdio.h>
//WATCH OUT 
int *fun(int *pa);
int main()
{
	int arr[5]={1,2,3,4,5},*ptr;
	fun(arr);
	printf("Address of 0th element is %p ",arr);
	printf("\n");
	ptr=fun(arr);
	printf("Address of 1th element is %p \t %p ",ptr,&arr[1]);

}
int *fun(int *pa)
{
	return(pa+1);
}


