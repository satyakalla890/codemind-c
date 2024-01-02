#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j,k,s,m=0,n=0,t,c,d;
    scanf("%d",&a);
    c=a+1;
    t=a;
    while (a!=0)
    {
       k=a%10;
       n=n+1;
       a=a/10;
    }
    while (t!=0)
    {
       for(i=n;i>=1;i--)
       {
           j=t%10;
           s=pow(j,i);
           m=m+s;
           t=t/10;
       }
       d=m+1;
    }
    if (c==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}