//program to perform Insertion sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,temp;
	printf("Enter the no. of element in the array \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=arr[i];
		while(temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
		for(j=0;j<n;j++)
	{
		printf("%d \t",arr[j]);
	}
	return 0;
}
