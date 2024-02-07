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

int *ExtractEven(char *str, int len) {
    int *E_result = (int *) malloc (sizeof(int) * len);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0';
            if (num % 2 == 0) {
                E_result[j++] = num;
            }
        }
    }
    E_result[j] = -1;
    return E_result;
}

int *ExtractOdd(char *str, int len) {
    int *O_result = (int *) malloc (sizeof(int) * len);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0';
            if (num % 2 != 0) {
                O_result[j++] = num;
            }
        }
    }
    O_result[j] = -1;
    return O_result;
}

int main() {
    char str[1001];
    scanf("%s", str);
    
    int len = strlen(str);
    int count = CountSpecialCharacters(str, len);
    int *even = ExtractEven(str, len);
    int *odd = ExtractOdd(str, len);
    
    if (count % 2 == 0) {
        int i = 0, j = 0;
        while(even[i] != -1 || odd[j] != -1) {
            if (even[i] != -1) {
                printf("%d", even[i++]);
            }
            if (odd[j] != -1) {
                printf("%d", odd[j++]);
            }
        }
    } else {
        int i = 0, j = 0;
        while(odd[i] != -1 || even[j] != -1) {
            if (odd[i] != -1) {
                printf("%d", odd[i++]);
            }
            if (even[j] != -1) {
                printf("%d", even[j++]);
            }
        }
    }
    
    free(even);
    free(odd);
}