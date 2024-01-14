#include <stdio.h>
#include <string.h>

int ispalin(char *str, int n) {
    for (int i = 0; i <= n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int Tcases;
    scanf("%d", &Tcases);
    
    while (Tcases > 0) {
        char str[101];
        scanf("%s", str);
        
        int len = strlen(str);
        if (ispalin(str, len) && len % 2 == 0) {
            printf("YES EVEN
");
        } else if (ispalin(str, len) && len % 2 != 0) {
            printf("YES ODD
");
        } else {
            printf("NO
");
        }
        Tcases--;
    }
    return 0;
}