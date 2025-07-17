#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {


	int M, N;
	int i, j;

	scanf("%d %d", &N, &M);
	int* arr = (int*)calloc( N,sizeof(int));
	for (int l = 0; l < N; l++)
		arr[l] = l + 1;
	
	for (int l = 0; l < M; l++) {
		scanf("%d %d", &i, &j);
		swap(&arr[i-1], &arr[j-1]);
	}

	for (int m = 0; m < N; m++)
		printf("%d ",arr[m]);

	return 0;
}