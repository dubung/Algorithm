#include <stdio.h>
#include <string.h>
typedef struct _point
{
    int x;
    int y;
}Point;
Point result(int T);

int main() {
  
    int T;
    scanf("%d", &T);
    Point point = result(T);
    printf("%d/%d",point.y+ 1,point.x+1);
   
    return 0;
}
Point result(int T) {

    int upX[] = {0, 1};
    int upY[] = {1,-1};
    int downX[] = {1,-1};
    int downY[] = {0, 1};

    int count = 0;
    int line = 0;

    Point result;
    int x =0, y = 0;
    while (1) {

        if (T <= count) {

            count = (line * (line - 1)) / 2 + 1; // 현재라인 시작점
            
            if (!(line & 1)) {// 현재라인이 짝수라면 내려가야하니깐

                x = line - 1;
                y = 0;

                for (int i = 1; i <= line; i++) {

                    if (count == T) {
                        result.x = x;
                        result.y = y;
                        return result;
                    }
                    x += downX[1];
                    y += downY[1];

                    count++;
                }
            }
            else {// 현재라인이 홀수라면 다음은 옆으로 한칸 밑으로 내려가

                x = 0;
                y = line - 1;

                for (int i = 1; i <= line;i++) {

                    if (count == T) {
                        result.x = x;
                        result.y = y;
                        return result;
                    }
                    x += upX[1];
                    y += upY[1];
                    
                    count++;
                }
            }
        }
        else {
            line++;
            count = (line *(line + 1))/2;
            
        }
    }

    return result;

}
