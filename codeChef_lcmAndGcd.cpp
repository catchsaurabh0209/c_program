#include <stdio.h>
int gcd(int n1,int n2);
int lcm(int n1,int n2);
int main()
{
	int n,i,j,k,l,c=0,d;
	int ar[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&d);
	    for(j=0;j<d;j++)
	    {
	    	scanf("%d",&ar[j]);
		}
		for(k=0;k<d;k++)
		{
			for(l=k;l<d;l++)
			{
				if(k!=l)
				{
					printf("%d%d",ar[k],ar[l]);
					if(lcm(ar[k],ar[l])==2*gcd(ar[k],ar[l]))
					{
						c=c+1;	
					}
				}
			}
		}
    }
    printf(" value %d",c);
	return 0;
}
int gcd(int n1,int n2)
{
    int i,hcf;
    int n=(n1<n2)?n1:n2;
    for(i=1;i<=n;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    return (hcf);
}
int lcm(int n1,int n2)
{
    int lcm;
    lcm=((n1*n2)/gcd(n1,n2));
    return (lcm);
}
