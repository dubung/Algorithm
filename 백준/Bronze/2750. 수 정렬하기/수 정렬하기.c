#include <stdio.h>
#include <stdlib.h>

int main() {


    int a; 

    int* arr;
    scanf("%d", &a);

    arr = (int*)malloc(sizeof(int) * (a+1));

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        int temp = arr[i];
        for (int j = i; j < a; j++) {
            if (arr[j] < temp) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        arr[i] = temp;
    }
    
    for (int i = 0; i < a; i++)
        printf("%d\n", arr[i]);

    free(arr);

    return 0;
}
