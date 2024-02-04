#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int isvowel (char ch) {
    ch = tolower(ch);
    return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

char *GoatLatin (char * str) {
    char *result = (char *) malloc ((strlen(str) * 10) + 1);
    char *token = strtok(str, " ");
    int index = 1;
    
    while (token != NULL) {
        if (isvowel(token[0])) {
            strcat(result, token);
            strcat(result, "ma");
        } else {
            strcat(result, token + 1);
            strncat(result, &token[0], 1);
            strcat(result, "ma");
        }
        
        for (int i = 0; i < index; i++) {
            strcat(result, "a");
        }
        
        strcat(result, " ");
        token = strtok(NULL, " ");
        index++;
    }
    
    result[strlen(result) - 1] = NULL;
    return result;
}

int main() {
    char str[1001];
    scanf("%[^
]", str);
    
    char *GoatLatinSentence = GoatLatin(str);
    printf("%s", GoatLatinSentence);
    
    free(GoatLatinSentence);
    
    return 0;
}