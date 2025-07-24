#include <stdio.h>
#include <stdlib.h>

int main() {
		
	int a = 0,b =0;
    int arr[10000] = { 0, };
	scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        arr[b - 1]++;
    }

    for (int i = 0; i < 10000; i++) {
        for (int j = 0; arr[i] != 0; j++) {
            printf("%d\n", i+1);
            arr[i]--;
        }
    }
	return 0;
}