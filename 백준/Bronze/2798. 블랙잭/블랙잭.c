#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int* p = (int*)malloc(sizeof(int) * (a + 1));

    for (int i = 0; i < a; i++) {
        scanf("%d", &p[i]); 
    }
    int max = 0;
    int sum = 0;
    for (int i = 0; i < a - 2; i++) {
        for (int j = i + 1; j < a - 1; j++) {
            for (int k = j + 1; k < a; k++) {

                sum = p[i];
                sum += p[j];
                sum += p[k];

                if (sum > max && sum <= b)
                    max = sum;

                if (max == b) {
                    printf("%d", max);
                    free(p);
                    return 0;
                }
            }
        }
    }

    printf("%d", max);

    free(p);
    return 0;
}