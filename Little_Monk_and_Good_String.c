#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isvowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main () {
    char str[1001];
    scanf("%s", str);
    
    int count = 0;
    int consecutive = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isvowel(str[i])) {
            count++;
        } else {
            consecutive = (consecutive > count) ? consecutive : count;
            count = 0;
        }
    }
    
    consecutive = (consecutive > count) ? consecutive : count;
    printf("%d
", consecutive);
    
    return 0;
}
