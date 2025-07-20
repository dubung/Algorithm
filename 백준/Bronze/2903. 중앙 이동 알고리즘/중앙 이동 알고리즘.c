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

    int result = 1;

    for (int i = 0; i < T; i++)
        result *= 2;

    result++;
    result *= result;
    return result;
}