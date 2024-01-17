#include <stdio.h>
#include <string.h>

int main () {
    char str[1234];
    scanf("%s", str);
    
    int flag = 0;
    for (int i = 0; str[i] != NULL; i++) {
        int count = 0;
        for (int j = 0; str[j] != 0; j++) {
            if (str[i] == str[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("-1");
    }
}