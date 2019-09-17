//program to perform Selection sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,lowest,loc,temp;
	printf("Enter the no. of element in the array \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		lowest=arr[i],loc=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<lowest)
			{
				lowest=arr[j],loc=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	for(j=0;j<n;j++)
	{
		printf("%d \t",arr[j]);
	}
	return 0;
}
	
