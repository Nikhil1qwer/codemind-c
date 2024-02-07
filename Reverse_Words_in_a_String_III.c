#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[1001];
    scanf("%[^
]", str);
    
    char *reverse = (char *) malloc (strlen(str) + 1);
    char *Words = strtok(str, " ");
    
    int j = 0;
    while (Words != NULL) {
        int len = strlen(Words);
        for (int i = len - 1; i >= 0; i--) {
            reverse[j] = Words[i]; j++;
        }   reverse[j++] = ' ';
        Words = strtok(NULL, " ");
    }
    
    reverse[j - 1] = NULL;
    printf("%s", reverse);
    free(reverse);
}
