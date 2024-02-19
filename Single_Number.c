#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);
    
    int result = 0;
    for(int i = 0; i < size; i++) {
        int nums;
        scanf("%d", &nums);
        result ^= nums;
    }
    
    printf("%d", result);
    return 0;
}