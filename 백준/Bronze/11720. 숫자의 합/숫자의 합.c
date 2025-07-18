#include <stdio.h>

int main() {

	char a[100];
	int cnt = 0;
	int sum = 0;
	scanf("%d%s", &cnt, a);

	for(int i =0 ; i < cnt; i++){
		sum += a[i] - '0';
	}
	printf("%d\n", sum);
	
	return 0;
}