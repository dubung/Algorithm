#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int minx = 10001, miny = 10001, maxx =-10001, maxy = -10001;

	int x, y;
	if (a != 1) {
		for (int i = 0; i < a; i++) {
			scanf("%d %d", &x, &y);

			if (x > maxx)
				maxx = x;
			if (x < minx)
				minx = x;
			if (y > maxy)
				maxy = y;
			if (y < miny)
				miny = y;
		}

		printf("%d", (maxx - minx) * (maxy - miny));
	}
	else {
		printf("0");
	}

	return 0;
}

