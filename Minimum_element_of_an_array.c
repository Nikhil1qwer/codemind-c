#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int A[n];
    int result;
    
    for(int i = 0; i < n ; i++){
        scanf("%d", &A[i]);
        result = (A[0] >= A[i]) ? A[i] : A[0];
    }
    printf("%d",result);
    
}