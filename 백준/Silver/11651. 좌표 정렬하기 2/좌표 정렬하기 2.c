#include <stdio.h>
#include <stdlib.h>
typedef struct _point {

	int x, y;

}POINT;
int Compare(const void* p1, const void* p2) {
	POINT P1 = *(POINT*)p1;
	POINT P2 = *(POINT*)p2;
	if (P1.y > P2.y)return 1;
	else if (P1.y < P2.y) return-1;
	else {
		if (P1.x > P2.x) return 1;
		else if (P1.x < P2.x) return -1;
	}
}

int main() {
		
	int a = 0;
	scanf("%d", &a);
	POINT* arr = (POINT*)malloc(sizeof(POINT) * (a + 1));

	for (int i = 0; i < a; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	
	qsort((void*)arr, a, sizeof(POINT), Compare);

	for (int i = 0; i < a; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	

	return 0;
}