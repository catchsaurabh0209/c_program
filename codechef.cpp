#include<stdio.h>
int gcd(int n1,int n2);
int main(void) {
	int i=1,j,k,n,d,arr[100],l,flag=0;
	scanf("%d",&n);
	while(i<=n)
	{
	    scanf("%d",&d);
	    j=0;
	    while(j<d)
	    {
	        scanf("%d",&arr[j]);
	    }
	    printf("%d",d);
	    for(k=0;k<d;k++)
	    {
	        for(l=k;l<d;l++)
	        {
	        	if(l!=k)
	        	{
	        		printf("%d%d",arr[k],arr[l]);
		            if (gcd(arr[k],arr[l]) == 1 )
		            {
		                flag=1;
		            }
				}
	        	
	        }
	    }
	    if(flag ==1)
	    {
	        printf("YES \n");
	    }
	    else
	    {
	        printf("NO \n");
	    }
	    i=i+1;
	}
	return 0;
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return (n1);
}

