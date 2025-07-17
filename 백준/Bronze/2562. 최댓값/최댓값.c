#include <stdio.h>

int main() {


	int a, b,cnt = 0,Max = 0;

	scanf("%d", &b);

	Max = b;
	cnt = 1;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &b);
		if (b > Max) {
			Max = b;
			cnt = i+2;
		}
	}
	printf("%d\n%d", Max, cnt);

	return 0;
}