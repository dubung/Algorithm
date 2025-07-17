#include <stdio.h>
#include <stdlib.h>

int main() {


	int a, b,Min = 0,Max = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	Max = b;
	Min = b;
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		if (Min > b)
			Min = b;
		if (Max < b)
			Max = b;

	}
	printf("%d %d", Min, Max);

	return 0;
}