 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Compare(const void* str1, const void* str2) {
	char** STR1 = (char**)str1;
	char** STR2 = (char**)str2;

	if (strlen(*STR1) > strlen(*STR2))return 1;
	else if (strlen(*STR2) > strlen(*STR1)) return -1;
	else {
		if (strcmp(*STR1, *STR2) > 0) return 1;
		else if (strcmp(*STR1, *STR2) < 0) return -1;
	}
}

int main() {

	int a = 0;
	scanf("%d", &a);
	char** arr = (char*)malloc(sizeof(char*) * (a + 1));

	if (arr == NULL)
		return;

	for (int i = 0; i < a; i++) {
		arr[i] = (char*)malloc(sizeof(char)*51);
	}

	for (int i = 0; i < a; i++) {
		scanf("%s", arr[i]);
	}

	qsort((void*)arr, a, sizeof(char*), Compare);
	//for (int i = 0; i < a; i++) {
	//	char temp[51];
	//	strcpy(temp, arr[i]);
	//	for (int j = i; j < a; j++) {
	//		if (Compare(temp, arr[j]) == 1) {
	//
	//			strcpy(temp, arr[j]);
	//			strcpy(arr[j], arr[i]);
	//			strcpy(arr[i], temp);
	//		}
	//	}
	//	strcpy(arr[i], temp);
	//}
	printf("%s\n", arr[0]);

	for (int i = 1; i < a; i++) {
		if (strcmp(arr[i], arr[i - 1]) != 0) {
			printf("%s\n", arr[i]);
		}
	}
	for (int i = 0; i < a; i++) {
		free(arr[i]);
	}
	free(arr);


	return 0;
}
