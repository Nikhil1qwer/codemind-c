#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1001];
    scanf("%[^
]", str);
    
    char *Words = strtok(str, " ");
    
    while (Words != NULL) {
        
        int len = strlen(Words);
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", Words[i]);
        }   printf(" ");
        
        Words = strtok(NULL, " ");
    }
    
    return 0;
}
