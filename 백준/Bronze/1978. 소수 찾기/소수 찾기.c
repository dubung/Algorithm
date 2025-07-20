#include <stdio.h>
int isPN(int M);
int main() {

    int N = 0,M;
    int result = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        result += isPN(M);
    }
    printf("%d", result);
    return 0;
}
int isPN(int M) {

    if (M == 1)
        return 0;

    for (int i = 2; i < M; i++) {
        if (!(M % i))
            return 0 ;
    }

    return 1;
}