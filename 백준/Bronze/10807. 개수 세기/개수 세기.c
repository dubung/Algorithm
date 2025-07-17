#include <stdio.h>
#include <stdlib.h>

int main() {


	int a, b, c, cnt = 0;
	scanf("%d", &a);

	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		arr[i] = b;
	}
	scanf("%d", &c);
	for (int i = 0; i < a; i++) {
		if (arr[i] == c)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}