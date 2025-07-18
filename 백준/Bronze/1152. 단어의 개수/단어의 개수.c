#include <stdio.h>
#include <string.h>
int find(char* arr,int start,int end);
int main() {

	char* arr = (char*)malloc(sizeof(char) * 1000000);
	
	gets(arr);

	printf("%d",find(arr,0, strlen(arr)));
	return 0;
}

int find(char* arr,int start,int end) {
	int add = 1;
	if (arr[0] == ' ')
		add = 0;
	int begin = start;

	for (int i = begin; i < end;i++) {
		begin++;
		if (arr[i] == ' ') {
			begin = i;
			break;
		}
	}

	return arr[begin+1] != '\0'?find(arr, begin + 1,end)+1: add;
}