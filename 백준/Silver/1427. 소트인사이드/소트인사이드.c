#include <stdio.h>
#include <stdlib.h>
void result(int num);
int main() {
		
	int a = 0;
	scanf("%d", &a);
	result(a);


	return 0;
}
void result(int num) {
	int arr[10];
	int cnt = 0;
	int tempNum = num;

	while (tempNum != 0) {
		cnt++;
		tempNum /= 10;
	}

	tempNum = num;
	for (int i = 0; tempNum != 0; i++) {
		arr[i] = tempNum % 10;
		tempNum /= 10;
	}
	int temp = 0;
	for(int i = 0;i <cnt;i++){
		temp = arr[i];
		for (int j = i; j < cnt; j++) {
			if (temp < arr[j]) {
				arr[i] = arr[j];
				arr[j] = temp;
				temp = arr[i];
			}
		}
		arr[i] = temp;
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d", arr[i]);
	}

}