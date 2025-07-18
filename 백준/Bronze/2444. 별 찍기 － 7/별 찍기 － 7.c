#include <stdio.h>
#include <string.h>

int main() {
	
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = i; j < a; j++) {
			printf(" ");
		}
		for (int j = 1;j <= (i*2)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < a; i++) {
		for (int j = a - i; j < a; j++) {
			printf(" ");
		}
		for (int j = a; j >= (i * 2) - a +2; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}