#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void sort(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(str) - 1; j++) {
            if (str[j] < str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

char *EvenString(char *str) {
    int found = 0;
    
    for (int i = 0; str[i] != NULL; i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0';
            if (num % 2 == 0) {
                found++;
            }
        }
    }
    
    if (found == 0) {
        return NULL;
    }
    
    char *digit = (char *) malloc (10 * sizeof(char));
    int n = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            int num = str[i] - '0';
            digit[n++] = str[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;) {
            if (digit[j] == digit[i]) {
                for (int k = j; k < n; k++) {
                    digit[k] = digit[k + 1];
                } 
                n--;
            } else {
                j++;
            }
        }
    }  digit[n] = NULL;
    
    sort(digit);
    
    if ((digit[n - 1] - '0') % 2 != 0) {
        int ex = -1;
        int ox = n - 1;
        
        for (int i = n - 1; i >= 0; i--) {
            if ((digit[i] - '0') % 2 == 0) {
                ex = i;
                break;
            }
        }
        
        if (ex != -1) {
            swap(&digit[ox], &digit[ex]);
        }
    }
    
    return digit;
}

int main() {
    char str[1001];
    scanf("%s", str);
    
    char *Num = EvenString(str);
    
    if (Num == NULL) {
        printf("-1");
    } else {
        printf("%s", Num);
        free(Num);
    }
    
}
