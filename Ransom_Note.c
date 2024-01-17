#include <stdio.h>
#include <string.h>

int main () {
    char note[123];
    scanf("%s", note);
    
    int len = strlen(note);
    
    char str[1234];
    scanf("%s", str);
    
    int Count = 0;
    for (int i = 0; note[i] != NULL; i++) {
        for (int j = 0; str[j] != NULL; j++) {
            if (note[i] == str[j]) {
                Count++;
                str[j] = ' ';
                break;
            }
        }
    }
    if (len == Count) {
        printf("True
");
    } else {
        printf("False
");
    }
}