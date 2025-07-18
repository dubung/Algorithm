#include <stdio.h>
#include <string.h>
int isPalindrome(char* arr);
int main() {
	
	char arr[100] = { '\0', };
	scanf("%s", arr);
	printf("%d",isPalindrome(arr));
	return 0;
}
int isPalindrome(char* arr) {
	int cnt = strlen(arr);
	for (int i = 0; i < cnt / 2; i++) {
		if (arr[i] != arr[cnt - i-1]) {
			return 0;
		}
	}
	return 1;
}