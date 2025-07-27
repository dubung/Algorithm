 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct h {
	char* Name;
	int age;
}H;
void MyInsertSort(H* arr, int Size);

int Compare(const void* param1, const void* param2) {
	H* P1 = (H*)param1;
	H* P2 = (H*)param2;

	if ((P1->age) > (P2->age))return 1;
	else if ((P1->age) < (P2->age)) return -1;
}

int main() {

	int a = 0;
	scanf("%d", &a);
	H* arr = (H*)malloc(sizeof(H) * (a+1));

	if (arr == NULL)
		return;

	char temp[100];
	int len = 0;
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i].age);
		scanf("%s", &temp);
		len = strlen(temp);
		arr[i].Name = (char*)malloc(sizeof(char) * (len + 1));
		strcpy(arr[i].Name, temp);
	}

	qsort((void*)arr, a, sizeof(H), Compare);
	for (int i = 0; i < a; i++) {
		printf("%d %s\n", arr[i].age, arr[i].Name);
	}

	for (int i = 0; i < a; i++) {
		free(arr[i].Name);
	}
	free(arr);


	return 0;
}

void MyInsertSort(H* arr, int Size) {
	int j = 0;
	char temp[100]="";
	for (int i = 1; i < Size; i++) {
		int age = arr[i].age;
		strcpy(temp, arr[i].Name);
		for (j = i; age < arr[j-1].age && j > 0; j--) {
			arr[j].age = arr[j - 1].age;
			strcpy(arr[j].Name, arr[j - 1].Name);
		}
		arr[j].age = age;
		strcpy(arr[j].Name, temp);
	}
}