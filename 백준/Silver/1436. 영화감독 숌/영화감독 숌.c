#include <stdio.h>
int checkdigits(int a);
int main() {
		
	int a = 0;
	int cnt = 0;
	int num = 666;
	int tempnum = num;
	int result = 0;
	scanf("%d", &a);

	while (1) {
		int digits = checkdigits(num);
		tempnum = num;
		for (int i = 0; i <= digits - 3; i++) {
			
			if ((tempnum % 1000) == 666) {
				cnt++;
				break;
			}
			else {
				tempnum /= 10;
			}
		}
		if (cnt == a) {
	
			break;
		}
		num++;
	}
	printf("%d", num);
}
int checkdigits(int a) {
	int cnt = 1;
	while (a /= 10)cnt++;
	return cnt;
}
