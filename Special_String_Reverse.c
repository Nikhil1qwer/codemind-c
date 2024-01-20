#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1234];
    scanf("%s", str);

    int n = strlen(str);
    int start = 0, end = n - 1;

    while (start < end) {
        if (isalpha(str[start]) && isalpha(str[end])) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        } else {
            if (!isalpha(str[start])) {
                start++;
            }
            if (!isalpha(str[end])) {
                end--;
            }
        }
    }

    printf("%s", str);
    
}
