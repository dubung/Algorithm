#include <stdio.h>
int checkdigits(int a);
int main() {
		
	int a = 0;
	scanf("%d", &a);
	int reslut = 1000000;
	for (int i = 0; i< 5000; i++) {
		for (int j = 0; j < 5000; j++) {
			if (5 * i + 3 * j == a) {

				if (reslut > (i + j)) {

					reslut = i + j;
				}

			}
		}
	}
	if (reslut == 1000000)
		reslut = -1;
	printf("%d", reslut);
	return 0;
}