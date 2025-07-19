
#include <stdio.h>

#include<stdlib.h>
int main() {
    int arr[9][9] = { {0,}, };

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max,mX = 0,mY = 0;
    max = arr[0][0];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                mY = i;
                mX = j;
            }
        }
    }
    printf("%d\n%d %d", max, mY+1, mX+1);

    return 0;
}

