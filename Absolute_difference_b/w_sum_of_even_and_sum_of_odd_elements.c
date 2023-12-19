#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,diff;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m[i]%2==0)
        {
            even=even+m[i];
        }
        else
        {
            odd=odd+m[i];
        }
    }
    if(even>odd)
    {
      diff=(even-odd);
    }
    else
    {
        diff=odd-even;
    }
    printf("%d",diff);
}