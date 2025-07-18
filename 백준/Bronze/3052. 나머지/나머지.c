#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int a, b, cnt=0;
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		arr[i] = a%42;
	}
	for (int i = 0; i < 10; i++) {
		
		for (int j = 0; j < 10; j++) {
			if (arr[i] == arr[j] && i != j) {
				arr[j] = -1;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] >= 0) {
			cnt++;
		}
	}
	printf("%d", cnt);


	return 0;
}