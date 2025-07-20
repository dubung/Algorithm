#include <stdio.h>
#include <string.h>
void change(int M,int *arr);

int main() {
  
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int arr[4] = { 0, };
        int M;
        scanf("%d", &M);

        change(M, arr);

        for(int j = 0 ; j < 4; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }

   
    return 0;
}
void change(int M, int* arr) {
    arr[0] = M / 25;
    arr[1] = (M % 25) / 10;
    arr[2] = ((M % 25) % 10) / 5;
    arr[3] = ((M % 25) % 10) % 5;
}