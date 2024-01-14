#include <stdio.h>
#include <ctype.h>

int main () {
    char str[1001];
    scanf("%s", str);
    
    int alpha[26] = {0};
    for (int i = 0; str[i] != NULL; i++) {
        str[i] = tolower(str[i]);
        int all = str[i] - 'a';
        alpha[all]++;
    }
    int count = 0;
    while (alpha['b' - 'a'] >= 1 && alpha['a' - 'a'] >= 1 && alpha['l' - 'a'] >= 2 && alpha['o' - 'a'] >= 2 && alpha['n' - 'a'] >= 1) {
        
        alpha['b' - 'a']--;
        alpha['a' - 'a']--;
        alpha['l' - 'a'] -= 2;
        alpha['o' - 'a'] -= 2;
        alpha['n' - 'a']--;
        count++;
        
    }
    printf("%d", count);
}