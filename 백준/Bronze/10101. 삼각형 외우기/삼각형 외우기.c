#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);

	if ((a + b + c) != 180)
		printf("Error");
	else
	{
		if (a != b && a != c && b != c)
			printf("Scalene");
		else if ((a&b)==c)
			printf("Equilateral");
		else
			printf("Isosceles");
	}


	return 0;
}

