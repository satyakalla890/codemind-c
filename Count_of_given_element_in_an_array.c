#include<stdio.h>
int main()
{
    int n,i,count=0,sv;
    scanf("%d",&n);
    
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     scanf("%d",&sv);
    for(i=0;i<n;i++)
    {
        if(sv==arr[i])
        {
            count=count+1;
        }
    }
    printf("%d",count);
}