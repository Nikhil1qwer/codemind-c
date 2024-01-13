#include <stdio.h>

int isvowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    return 0;
}

int main () {
    char str[1001];
    scanf("%s", str);
    
    int count = 0, found = 0;
    for (int i = 0; str[i] != NULL; i++) {
        if (isvowel(str[i])) {
            found++;
            count = (count > found) ? count : found;
        } else {
            found = 0;
        }
    }
    printf("%d", count);
}