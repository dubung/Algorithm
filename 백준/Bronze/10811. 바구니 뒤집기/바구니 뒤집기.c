#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void reverse(int* arr, int a, int b) {

	if (a > b || a==b)
		return;
	swap(&arr[a], &arr[b]);

	reverse(arr, a + 1, b - 1);
}
int main() {

	int N, M,l,m;
	scanf("%d %d", &N, &M);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &l, &m);
		reverse(arr, l-1, m-1);
	}

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);


	return 0;
}
