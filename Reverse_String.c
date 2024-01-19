#include <stdio.h>
#include <string.h>

void reverseOrder(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    start = 0;
    while (str[start]) {
        while (str[start] == ' ') {
            start++;
        }
        end = start;
        while (str[end] && str[end] != ' ') {
            end++;
        }

        int i = start, j = end - 1;
        while (i < j) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
        start = end;
    }
}

int main() {
    char str[100];
    scanf("%[^
]", str);

    reverseOrder(str);

    printf("%s
", str);
}
