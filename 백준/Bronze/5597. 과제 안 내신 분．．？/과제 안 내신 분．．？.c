#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int arr[30] = { 0, };
	int n;
	for (int i = 0; i < 30; i++)
	{
		scanf("%d", &n);
		arr[n - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (!arr[i])
			printf("%d\n", i + 1);
	}

	
	return 0;
}