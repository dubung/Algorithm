#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int max = a;
	int res = a + b + c;
	
	if (max < b)max = b;
	if (max < c)max = c;
	int sum = res - max;

	if (!(max < sum)) {
		while (max--) {
			if (max < sum) {
				break;
			}
		}
	}
	printf("%d", sum + max);

	return 0;
}

