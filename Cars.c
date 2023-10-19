#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x%4==0)
    {
        y=x/4;
        printf("%d",y);
    }
    else
    {
        y=(x/4)+1;
        printf("%d",y);
    }
}