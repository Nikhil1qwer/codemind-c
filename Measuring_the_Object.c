#include<stdio.h>
int main () {
int w,a,b,c;
scanf("%d %d %d %d",&w,&a,&b,&c);

if ( w == a+b || w == b+c || w == c+a || w == a||w==b||w==c)
{
    printf("YES");
    
} else {
printf("NO");}

}