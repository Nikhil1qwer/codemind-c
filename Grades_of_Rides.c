#include<stdio.h>
int main(){
    int hurl,spin,speed;
    scanf("%d %d %d",&hurl,&spin,&speed);
    if(hurl>50 && spin>60 && speed>100){
        printf("10");
    }
    else if(hurl>50 && spin>60){
        printf("9");
    }
    else if(spin>60 && speed>100){
        printf("8");
    }
    else if(hurl>50 && speed>100){
        printf("7");
    }
    else  if(hurl>50 || spin>60 || speed>100){
        printf("6");
    }
    else{
        printf("5");
    }
}