#include <stdio.h>

void findBishopPosition() {
    char chessboard[8][8];
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf(" %c", &chessboard[i][j]);
        }
    }

    int bishopRow = 0, bishopCol = 0;

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (chessboard[i][j] == '#' && chessboard[i + 1][j + 1] == '#' && chessboard[i - 1][j - 1] == '#' && chessboard[i + 1][j - 1] == '#' && chessboard[i - 1][j + 1] == '#') {
                bishopRow = i + 1;
                bishopCol = j + 1;
                break;
            }
        }
        if (bishopRow != 0) {
            break;
        }
    }

    printf("%d %d
", bishopRow, bishopCol);
}

int main() {
    int Tcases;
    scanf("%d", &Tcases);

    while (Tcases > 0) {
        findBishopPosition();
        Tcases--;
    }

    return 0;
}
