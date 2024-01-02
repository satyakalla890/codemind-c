#include<stdio.h>
int main()
{
    int a,i,k,s=0,b;
    scanf("%d",&a);
    b=a;
    {
        while(a!=0)
        {
            k=a%10;
            s=s*10+k;
            a=a/10;
        }
        if (b==s)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}