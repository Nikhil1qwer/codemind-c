#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main () {
    char str[123];
    fgets(str, sizeof(str), stdin);
    
    int count = 1;
    int consecutive = 1;
    for (int i = 1; i < strlen(str) - 1; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            consecutive = (consecutive > count) ? consecutive : count;
            count = 1;
        }
    }
    
    consecutive = (consecutive > count) ? consecutive : count;
    printf("%d", consecutive);
    
}