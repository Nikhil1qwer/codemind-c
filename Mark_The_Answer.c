#include <stdio.h>
#include <stdlib.h>

int GetMaxScore(int *diff, int MaxDiff, int size) {
    int score = 0, skiped = 0;
    for(int i = 0; i < size; i++) {
        if(diff[i] > MaxDiff) {
            skiped++;
            if(skiped == 2) {
                return score;
            }
        } else {
            score++;
        }
    }
    return score;
}

void ReadArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void display(int score) {
    printf("%d", score);
}

int main() {
    int size;
    scanf("%d", &size);
    
    int MaxDiff;
    scanf("%d", &MaxDiff);
    
    int *difficulty = (int *) malloc (sizeof(int) * size);
    
    ReadArray(difficulty, size);
    int score = GetMaxScore(difficulty, MaxDiff, size);
    display(score);
    
    free(difficulty);
    return 0;
}