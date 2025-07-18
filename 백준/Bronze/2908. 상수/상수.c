#include <stdio.h>
#include <string.h>

int getdigits(int a);
int changeNum(int a);
int main() {
	int a,b;
	scanf("%d%d", &a,&b);
	a=changeNum(a);
	b = changeNum(b);
	printf("%d", a > b ? a : b);
	return 0;
}

int getdigits(int a) {
	int cnt = 1;
	while (a /= 10)cnt++;
	return cnt;
}

int changeNum(int a) {
	int i = 0;
	int revNum = 0;
	int tempNum = 0;
	int cnt = getdigits(a);
	while (a != 0) {
		
		tempNum = a % 10;
		a /= 10;
		for (int j = i; j < cnt-1; j++) {
			tempNum *= 10;
		}
		
		revNum += tempNum;
		i++;
	}
	return revNum;
}


