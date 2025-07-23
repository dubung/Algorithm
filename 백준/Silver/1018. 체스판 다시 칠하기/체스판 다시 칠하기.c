#include <stdio.h>

int checkReplaceCnt(char** arr, int h, int w);
int main() {


    char chess[50][50];

    int h, w;

    scanf("%d%d ", &h, &w);

    for (int H = 0; H < h; H++) {
        scanf("%s", chess[H]);
        chess[H][w] = '\0';
    }
    int result = 640;
    int iCnt = 0, iCnt2 = 0;
    char chB = 'B';
    char chW = 'W';

    for (int H = 0; H <= h - 8; H++) {
        for (int W = 0; W <= w - 8; W++) {

            iCnt = 0;
            for (int checkH = 0; checkH < 8; checkH++) {
                for (int checkW = 0; checkW < 4; checkW++) {

                    
                    if (checkH % 2 == 0) {

                        if (chess[H + checkH][W + 2 * checkW] != chB) {
                            iCnt++;
                        }if (chess[H + checkH][W + 2 * checkW + 1] != chW) {
                            iCnt++;
                        }
                    }
                    else {
                        if (chess[H + checkH][W + 2 * checkW] != chW) {
                            iCnt++;
                        }if (chess[H + checkH][W + 2 * checkW + 1] != chB) {
                            iCnt++;
                        }
                    }
                    
                }
            }
            iCnt = iCnt > (64 - iCnt) ? 64 - iCnt : iCnt;
            if (result > iCnt)
                    result = iCnt;
            

        }
    }



    printf("%d", result);
    return 0;
}
