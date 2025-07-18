#include<stdio.h>

int main() {


    char str[1000];
    int a;

    scanf("%s %d", str, &a);
    printf("%c", str[a - 1]);

    return 0;
}