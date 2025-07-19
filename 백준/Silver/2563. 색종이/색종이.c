
#include <stdio.h>

#include<stdlib.h>
int main() {
    int arrPaper[101][101] = { {0,}, };

    int blackCnt = 0;
    scanf("%d", &blackCnt);

    for (int i = 0; i < blackCnt; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                arrPaper[x+i][y+j]++;
            }
        }
        

    }
    int count = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (arrPaper[i][j] != 0) count++;

    printf("%d", count);


    return 0;
}

