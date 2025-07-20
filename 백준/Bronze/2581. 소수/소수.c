#include <stdio.h>
int isPN(int M);
int main() {

    int N = 0,M = 0;
    int min = 10000;
    int result = 0;
    scanf("%d%d", &M, &N);

    for (int i = M; i <= N; i++) {
        int res = isPN(i);
        result += res;
        if (min > res && res != 0) {
            min = res;
        }

    }
    printf("%d\n", (result > 0) ? result : -1);
    if (result > 0)
        printf("%d", min);
    
    return 0;
}
int isPN(int M) {

    if (M == 1)
        return 0;

    for (int i = 2; i < M; i++) {
        if (!(M % i))
            return 0 ;
    }

    return M;
}