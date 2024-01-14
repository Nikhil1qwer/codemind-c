#include <stdio.h>
#include <ctype.h>

int isdecimal(char *str) {
    for (int i = 0; str[i] != NULL; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int Tcases;
    scanf("%d", &Tcases);
    
    while (Tcases > 0) {
        char str[2024];
        scanf("%s", str);
        
        if (isdecimal(str)) {
            printf("True
");
        } else {
            printf("False
");
        }
        Tcases--;
    }
    return 0;
}