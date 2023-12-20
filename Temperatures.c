#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i<n; i++) {
	    int count = 0;
		for(int j = i; j < n; j++) {
		    if (arr[i] < arr[j]) {
		        printf("%d ", j - i);
		        count++;
		        break;
		    }
		}
		if (count == 0) {
		    printf("0 ");
		}
	}
}