#include <stdio.h>
#include <string.h>

int main () {
    char str1[101];
    scanf("%s", str1);
    char str2[101];
    scanf("%s", str2);
    
    char str3[1001] = {0};
    strcpy(str3, strcat(str1, str2));
    
    int len = strlen(str3);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (str3[j] > str3[j + 1]) {
                char ch = str3[j];
                str3[j] = str3[j + 1];
                str3[j + 1] = ch;
            }
        }
    }
    printf("%s", str3);
}