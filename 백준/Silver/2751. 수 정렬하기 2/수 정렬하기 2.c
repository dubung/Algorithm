#include <stdio.h>
#include <stdlib.h>
void MergeSort(int * arr, int iStart, int iEnd);
void Merge(int* arr, int iStart, int iMid, int iEnd);
int main() {
		
	int a = 0;
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);

	for (int i = 0; i < a; i++)
		scanf("%d", &arr[i]);

	MergeSort(arr, 0, a-1);

	for (int i = 0; i < a; i++)
		printf("%d\n", arr[i]);

	return 0;
}
void MergeSort(int* arr, int iStart, int iEnd) {
	if (iStart < iEnd) {
		int iMid = (iStart + iEnd) / 2;
		MergeSort(arr, iStart, iMid);
		MergeSort(arr, iMid + 1, iEnd);

		Merge(arr, iStart, iMid, iEnd);
	}
}
void Merge(int* arr, int iStart, int iMid, int iEnd) {
    int Max = iEnd - iStart + 1;
    int* temp = (int*)malloc(sizeof(int) * Max);

    int l = iMid - iStart + 1;  // 왼쪽 길이
    int r = iEnd - iMid;        // 오른쪽 길이
    int L = 0, R = 0;

    for (int i = 0; i < Max; i++) {
        if (L >= l) {
            temp[i] = arr[iMid + 1 + R++];
        }
        else if (R >= r) {
            temp[i] = arr[iStart + L++];
        }
        else {
            temp[i] = (arr[iStart + L] < arr[iMid + 1 + R])
                ? arr[iStart + L++]
                : arr[iMid + 1 + R++];
        }
    }

    for (int i = iStart; i <= iEnd; i++) {
        arr[i] = temp[i - iStart];
    }

    free(temp);
}
