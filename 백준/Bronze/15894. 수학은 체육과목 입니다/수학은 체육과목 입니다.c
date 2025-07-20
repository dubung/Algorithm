#include <stdio.h>

int main() {

	long long a, boxSum = 0, solidSum= 0;

	scanf("%d", &a);
	boxSum = a * (a + 1) / 2;
	boxSum *= 4;
	solidSum = a * (a - 1) / 2;
	solidSum *= 4;

	printf("%lld",boxSum - solidSum);

	return 0;
}