
#include <stdio.h>

#include<stdlib.h>
int main() {
    int M, N;
    int cnt;
    scanf("%d%d", &N, &M);

    
    int pMatrix[101][101] = { 0, };

   
    for(int j = 0; j < 2; j++)
        for (int i = 0; i < N * M; i++) {
            scanf("%d", &cnt);
            pMatrix[i/M][i%M] += cnt;
        }

    for (int i = 0; i < N * M; i++) {
        printf("%d ", pMatrix[(i / M)][(i % M)]);
        if ((i + 1) % M == 0)
            printf("\n");
    }

}

