#include<stdio.h>



int mylen(char* arr);
int main() {


    char str[100];
    int a;

    scanf("%s", str);
    int len = mylen(str);
    printf("%d", len);

    return 0;
}
int mylen(char* arr) {
    int cnt = 0;
    while (*arr++)cnt++;
    return cnt;
}