#include <stdio.h>
#include <string.h>

int isValid (char *str, int n) {
    
    char alpha[26] = {0};
    for (int i = 0; i < n; i++) {
        alpha[str[i] - 'a']++;
    }
    
    int con = 0;
    int valid = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > 0) {
            con = alpha[i];
            valid++;
            break;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > 0 && alpha[i] != con) {
            valid++;
        }
        if (valid > 2) {
            return 0;
        }
    }
    return 1;
}

int main () {
    char str[1001];
    scanf("%s", str);
    
    if (isValid(str, strlen(str))) {
        printf("Valid String");
    } else {
        printf("Not Valid");
    }
    
}