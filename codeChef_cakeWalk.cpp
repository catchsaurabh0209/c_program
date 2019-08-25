#include<stdio.h>
int main()
{
    int n,i,j,d,arr[100],hig,low,k,out[100],l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&d);
        for(j=0;j<d;j++)
        {
            scanf("%d",&arr[j]);
        }
        hig=arr[0];
		low=arr[0];
        for(k=0;k<d;k++)
        {
            if(arr[k]>hig)
            {
                hig=arr[k];
            }
            if(arr[k]<low)
            {
                low=arr[k];
            }
        }
        //printf("%d high low %d",hig,low);
        out[l]=low;
        //printf("%d \n",out[l]);
        l=l+1;
        out[l]=hig;
        //printf("%d \n",out[l]);
        l=l+1;
    }
    for(i=0;i<l;i+=2)
    {
        printf("%d %d",out[i],out[i+1]);
    }
    printf("\n");
}


