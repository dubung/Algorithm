#include <stdio.h>
#include <string.h>
int myfind(char* arr, char find) {
	int cnt = -1;
	int i = 0;
	while (*(arr + i) != '\0') {
		
		if (*(arr + i) == find) {
			cnt = i;
			break;
		}
		i++;
	}
	return cnt;
}
int main() {

	char a[100];
	scanf("%s", a);

	for (int i = 'a'; i <= 'z'; i++) {
		printf("%d ", myfind(a, i));
	}

	
	return 0;
}