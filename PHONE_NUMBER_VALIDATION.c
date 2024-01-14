#include <stdio.h>
#include <string.h>

int main () {
    char str[19];
    scanf("%s", str);
    
    int len = strlen(str);
    
    if (len == 10 && str[0] != 0) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
}