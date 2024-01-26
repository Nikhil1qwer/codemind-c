#include <stdio.h>

void DisplayGain(int cst_price, int selin_price) {
    if (cst_price < selin_price) {
        printf("Profit");
    } else if (cst_price > selin_price) {
        printf("Loss");
    } else {
        printf("No Profit and No Loss");
    }
}

int main() {
    int cst, sellin;
    scanf("%d %d", &cst, &sellin);
    DisplayGain(cst, sellin);
}