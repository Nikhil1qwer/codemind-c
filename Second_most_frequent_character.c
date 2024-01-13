#include <stdio.h>
#include <limits.h>
#include <ctype.h>

char SecondMostFreq (char *str) {
    
    int alpha[26] = {0};
    for (int i = 0; str[i] != NULL; i++) {
        if (isalpha(str[i])) {
            alpha[str[i] - 'a']++;
        }
    }
    
    int freq_1 = INT_MIN;
    int freq_2 = 0;
    char Return = NULL;
    
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > freq_1) {
            freq_2 = freq_1;
            freq_1 = alpha[i];
            Return = 'a' + i;
        } else if (alpha[i] > freq_2 && alpha[i] < freq_1) {
            freq_2 = alpha[i];
            Return = 'a' + i;
        }
    }
    return (freq_2 == 0) ? NULL: Return;
}

int main () {
    char str[2024];
    scanf("%s", str);
    
    int Character = SecondMostFreq(str);
    if (Character == NULL) {
        printf("-1");
    } else {
        printf("%c", Character);
    }
    
}