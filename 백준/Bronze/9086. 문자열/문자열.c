#include <stdio.h>

int main() {

	char arr[1000];
	char Temp[2] = { '\0', };
	int a = 0;
	scanf("%d", &a);

	for(int i = 0; i < a;i++){
		scanf("%s", arr);
		int cnt = 0;
		Temp[0] = arr[cnt];

		while (arr[cnt] != '\0') {
			cnt++;
		} 
		Temp[1] = arr[--cnt];
		printf("%c%c\n", Temp[0],Temp[1]);
	}
}