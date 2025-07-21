#include <stdio.h>

int main() {

    int a1, a0;
    int c;
    int n0;

    scanf("%d%d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);

    int isok = 1;
    for (int i = n0; i <= 100; i++) {

        if ((a1 * i + a0) <= c * i) {

        }
        else {
            isok = 0;
            break;
        }

    }
    printf("%d",isok);

    return 0;
}
