#include <stdio.h>
#include <string.h>

int main() {
	
	int lookup[26] = {	2,2,2,
						3,3,3,
						4,4,4,
						5,5,5,
						6,6,6,
						7,7,7,7,
						8,8,8,
						9,9,9,9 };
	char arr[16] = {'\0',};
	scanf("%s", arr);
	int res = 0;

	for (int i = 0; arr[i] != '\0'; i++) {

		res += lookup[arr[i] - 'A'] + 1;
	}

	printf("%d", res);

}