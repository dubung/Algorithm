#include <stdio.h>

int main() {

	while(1)
	{

		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a==0 && b==0 && c==0) {

			break;

		}
		else {
			int max = a;
			if (max < b) max = b;
			if (max < c) max = c;

			if (max >= (a + b + c - max)) {
				printf("Invalid\n");
			}
			else {
				if (a != b && a != c && b != c)
					printf("Scalene");
				else if (a == b&& a==c && b == c)
					printf("Equilateral");
				else
					printf("Isosceles");

				printf("\n");
			}
		}


	}

	return 0;
}

