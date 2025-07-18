#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {

	int a = 0, iMax = 0,b;
	
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	double dSum = 0.;

	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		arr[i] = b;
		iMax = max(iMax, b);
	}
	for (int i = 0; i < a; i++) {
		dSum += ((double)arr[i]/iMax) * 100;
	}
	printf("%.10f", dSum / a);
	return 0;
}