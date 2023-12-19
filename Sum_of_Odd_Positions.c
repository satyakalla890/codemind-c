#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],sum;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (i%2==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}