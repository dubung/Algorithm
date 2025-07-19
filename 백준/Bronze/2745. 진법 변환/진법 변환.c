#include <stdio.h>
#include <string.h>
int change_Base_36(char* arr,int B, int index);
int main() {
  
    int B;
    char str[20];
    scanf("%s", str);
    scanf("%d", &B);
    printf("%d",change_Base_36(str, B,strlen(str) - 1));
    return 0;
}
int change_Base_36(char* arr, int B, int index) {

    if (index < 0)
        return 0;
    int change = 0;
    if ('A' <= *(arr) && *(arr) <= 'Z')
        change = *(arr) - 55;
    else if ('0' <= *(arr) && *(arr) <= '9')
        change = *(arr) - '0';

    int currentB = 1;
    for (int i = 0; i < index; i++)
        currentB *= B;
    arr++;
    return change_Base_36(arr,B,index -1) + currentB * change ;
}


