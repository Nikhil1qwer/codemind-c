#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int CountSpecialCharacters(char *str, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if(!isalnum(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[1001];
    scanf("%s", str);
    
    int len = strlen(str);
    int count = CountSpecialCharacters(str, len);
    
    int even[1001], odd[1001];
    int evenIndex = 0, oddIndex = 0;
    
    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0';
            if (num % 2 == 0) {
                even[evenIndex++] = num;
            } else {
                odd[oddIndex++] = num;
            }
        }
    }
    
    int i = 0, j = 0;
    if (count % 2 == 0) {
        while (i < evenIndex || j < oddIndex) {
            if (i < evenIndex) {
                printf("%d", even[i++]);
            }
            if (j < oddIndex) {
                printf("%d", odd[j++]);
            }
        }
    } else {
        while (i < oddIndex || j < evenIndex) {
            if (i < oddIndex) {
                printf("%d", odd[i++]);
            }
            if (j < evenIndex) {
                printf("%d", even[j++]);
            }
        }
    }
    
}
