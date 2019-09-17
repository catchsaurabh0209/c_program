//program to perform bubble sort
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
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}	
		}		
	}
	for(j=0;j<n;j++)
	{
		printf("%d \t",arr[j]);
	}
	return 0;
}
