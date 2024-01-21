#include <stdio.h>
#include <ctype.h>
#include <string.h>


int isvowel (char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    return 0;
}

int main () {
    char str[1234];
    scanf("%s", str);
    
    int n = strlen(str);
    int start = 0, end = n - 1;
    
    while (start < end) {
        if ( isvowel(str[start]) && isvowel(str[end]) ) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        } else if (!isvowel(str[start])) {
            start++;
        } else {
            end--;
        }
     }
    printf("%s", str);
}