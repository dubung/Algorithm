#include <stdio.h>
#include <string.h>
char printfChar(char* arr);
int main() {
	
	char arr[1000000] = { '\0', };
	scanf("%s", arr);
	printf("%c", printfChar(arr));
	return 0;
}
char printfChar(char* arr) {

	int lookup[26] = { 0, };

	for (int i = 0; arr[i] != '\0'; i++) {
		int gap = 0;
		if (arr[i] >= 'a' && 'z' >= arr[i]) {
			gap = 'a' - 'A';
		}
		
		lookup[arr[i] - 'A'-gap]++;
	}
	int max = lookup[0];
	int isdup = 0;
	int maxindex = 0;
	for (int i = 0; i < 26; i++) {

		if (max == lookup[i] && maxindex != i) {
			isdup = 1;
		}
		if (max < lookup[i]) {
			isdup = 0;
			max = lookup[i];
			maxindex = i;
		}
			
	}

	return isdup ? '?' : maxindex + 'A';


}