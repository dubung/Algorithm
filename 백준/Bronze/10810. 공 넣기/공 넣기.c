#include <stdio.h>
#include <stdlib.h>
int main() {


	int M, N;
	int i, j, k;

	scanf("%d %d", &N, &M);
	int* arr = (int*)calloc( N,sizeof(int));
	
	for (int l = 0; l < M; l++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int m = i - 1; m <= j - 1; m++)
			arr[m] = k;
	}

	for (int m = 0; m < N; m++)
		printf("%d ",arr[m]);

	return 0;
}