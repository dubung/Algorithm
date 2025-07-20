#include <stdio.h>
int main() {

    int A, B,C = 0;
    int arr[10000] = { 0, };

    scanf("%d %d", &A,&B);

    for (int i = 1; i <= A; i++) {
        if (!(A % i)) {
            arr[C++] = i;
        }
    }
    printf("%d", arr[B-1]);
    return 0;
}