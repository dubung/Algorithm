#include <stdio.h>
#include <stdlib.h>

int main() {


	int a, b,c ,cnt = 0;
	scanf("%d%d", &a,&b);

	int* arr = (int*)malloc(sizeof(int) * a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &c);
		if (c < b) {
			arr[cnt++] = c;
		}
	}
	for(int i = 0; i < cnt;i++)
		printf("%d ", arr[i]);

	return 0;
}