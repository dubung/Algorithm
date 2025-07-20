#include <stdio.h>
#include <string.h>
int result(int T);

int main() {
  
    int T;
    scanf("%d", &T);

    printf("%d",result(T));
   
    return 0;
}
int result(int T) {

    static int floor = 0;
    
    if ((((floor * (floor - 1)) / 2) * 6) + 1 <= T && T <= (((floor*(floor+1))/2) * 6) + 1)
        return ++floor;
    else {
        floor++;
        return result(T);
    }

}