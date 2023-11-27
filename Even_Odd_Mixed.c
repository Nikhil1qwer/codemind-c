#include<stdio.h>
int main()
{
    int i,n,t,r,even=0,odd=0,count=0;
    scanf("%d",&n);
    t=n;
    
    while(t>0)
    {
        r=t%10;
        if(r%2==0)
        {
            even = 1;
        }
        if(r%2==1)
        {
            odd = 1;
        }
        t /= 10;
    }
    if( even && !odd )
    {
        printf("Even");
    }
    else if( !even && odd)
    {
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}