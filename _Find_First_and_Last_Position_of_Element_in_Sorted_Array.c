#include <stdio.h>
#include <stdlib.h>

int findFirstIndex(int *arr, int left, int right, int target) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target && (mid == 0 || arr[mid - 1] != target))
        return mid;
    else if (arr[mid] >= target)
        return findFirstIndex(arr, left, mid - 1, target);
    else
        return findFirstIndex(arr, mid + 1, right, target);
}

int findLastIndex(int *arr, int left, int right, int target, int size) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target && (mid == size - 1 || arr[mid + 1] != target))
        return mid;
    else if (arr[mid] <= target)
        return findLastIndex(arr, mid + 1, right, target, size);
    else
        return findLastIndex(arr, left, mid - 1, target, size);
}

void DisplayIndices(int *arr, int size, int target) {
    int firstIndex = findFirstIndex(arr, 0, size - 1, target);
    int lastIndex = findLastIndex(arr, 0, size - 1, target, size);

    printf("%d %d", firstIndex, lastIndex);
    
}

int main() {
    int size;
    scanf("%d", &size);
    
    int *arr = (int *) malloc (sizeof(int) * size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int Target;
    scanf("%d", &Target);
    
    DisplayIndices(arr, size, Target);
    
    free(arr);
    return 0;
}