#include <stdio.h>

int main() {
    char ip[101];
    scanf("%s", ip);

    for (int i = 0; ip[i] != NULL; i++) {
        if (ip[i] == '.') {
            printf("[.]");
        } else {
            printf("%c", ip[i]);
        }
    }

    return 0;
}
