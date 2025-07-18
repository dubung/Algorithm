#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	char grade = 'F';
	a /= 10;
	switch (a) {
	case 10:
	case 9:
		grade = 'A';
		break;

	case 8:
		grade = 'B';
		break;

	case 7:
		grade = 'C';
		break;	

	case 6:
		grade = 'D';
		break;
	}
	
	printf("%c", grade);
	return 0;
}