#include <stdio.h>

int main() {

	int a;
	int source = 2;
	scanf("%d", &a);
	while (a >1)
	{
		if (!(a % source)) {
			printf("%d\n", source);
			a /= source;
		}
		else {
			source++;
		}
	}
  
}