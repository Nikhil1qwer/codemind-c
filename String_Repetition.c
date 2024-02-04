#include <stdio.h>
#include <string.h>

long long countOccurrences(char *str, long long n) {
    char target = 'a';
    long long count = 0;

    int onlyA = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a') {
            onlyA = 0;
            break;
        }
    }

    if (onlyA) {
        return n;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            count++;
        }
    }

    count *= (n / strlen(str));

    for (int i = 0; i < n % strlen(str); i++) {
        if (str[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[1001];
    scanf("%s", str);

    long long n;
    scanf("%lld", &n);

    long long result = countOccurrences(str, n);

    printf("%lld
", result);

}
