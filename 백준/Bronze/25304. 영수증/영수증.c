#include <stdio.h>

int main() {


	int a,b,c,d;

	scanf("%d", &a);

	scanf("%d", &b);
	for (int i = 0; i < b; i++) {
		scanf("%d %d", &c, &d);
		a -= (c * d);
	}
	printf("%s", (a == 0) ? "Yes" : "No");

	return 0;
}