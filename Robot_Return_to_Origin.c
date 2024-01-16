#include <stdio.h>

int Robot2_0(char *moves) {
    
    int x = 0, y = 0;
    for (int i = 0; moves[i] != NULL; i++) {
        switch (moves[i]) {
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            default:
                return 0;
        }
    }

    return (x == 0 && y == 0);
}

int main() {
    char moves[100];
    scanf("%s", moves);


    if (Robot2_0(moves)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
