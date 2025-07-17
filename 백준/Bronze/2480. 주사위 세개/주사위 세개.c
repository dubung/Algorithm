#include <stdio.h>

int main() {


	int a, b, c,res =0;

	scanf("%d%d%d", &a, &b, &c);

	if ((b== c) && (a == c) && (b == a))
	{
		res = (c * 1000) + 10000;
	}
	else if((a!= b)&& (a!=c) && (b!=c) ){
		res = 0;
		if ((a > b) && (a > c)) res = a;
		if ((b > a) && (b > c)) res = b;
		if ((c > b) && (c > a)) res = c;
		res *= 100;
	}
	else {
		if (a == b) res = a;
		else if (b == c) res = b;
		else if (a== c) res = c;
		res *= 100;
		res += 1000;
	}
	printf("%d", res);
	return 0;
}