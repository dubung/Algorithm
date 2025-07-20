#include <stdio.h>
int main() {


    while (1) {

        int A, C = 0;
        int arr[1000] = { 0, };
        int sum = 0;
        scanf("%d", &A);

        if (A == -1)
            break;

        for (int i = 1; i < A; i++) {
            if (!(A % i)) {
                arr[C++] = i;
                sum += i;
            }
        }
        if (sum == A) {
            printf("%d = ", A);
            for (int i = 0; i < C; i++) {
                if (i != 0)
                    printf(" + ");
                printf("%d", arr[i]);

            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n", A);

    }
    return 0;
}