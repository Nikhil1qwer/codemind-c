#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *bits = (int *) malloc (sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &bits[i]);
    }
    
    int Cmax = 0;
    int consec = 0;
    for(int i = 0; i < n; i++) {
        if(bits[i] == 0) {
            Cmax = (Cmax > consec)? Cmax : consec;
            consec = 0;
        } else {
            consec++;
        }
    }   
    
    Cmax = (Cmax > consec)? Cmax : consec;
    
    printf("%d", Cmax);
    
    free(bits);
    return 0;
}