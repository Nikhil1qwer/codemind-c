#include <stdio.h>

int main () {
    int Tcases;
    scanf("%d", &Tcases);
    
    while (Tcases > 0) {
    char str[1001];
    scanf("%s", str);
    
    int count = 0;
    for (int i = 0; str[i] != NULL; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }
    }
    printf("%d
", count);
    Tcases--;
    }
    
}