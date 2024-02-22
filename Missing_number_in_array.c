#include <stdio.h>
#include <stdlib.h>

int MissingNumber(int *nums, int size) {
    
    int missing = size * (size + 1) / 2;
    for(int i = 0; i < size; i++) {
        missing -= nums[i];
    }
    return missing;
    
}

int main() {
    int Tcases;
    scanf("%d", &Tcases);
    
    while(Tcases) {
        int size;
        scanf("%d", &size);
        
        int *array = (int *) calloc (size, sizeof(int));
        for(int i = 0; i < size - 1; i++) {
            scanf("%d", &array[i]);
        }
        
        int Missing = MissingNumber(array, size);
        printf("%d
", Missing);
        
        free(array);
        Tcases--;
    }
    
    return 0;
}