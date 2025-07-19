#include <stdio.h>
#include <string.h>
void change_Base_36(int dex,int B,char* str);

int main() {
  
    int B;
    int dex;
    scanf("%d%d", &dex , &B);
    char str[20];
    change_Base_36(dex, B, str);
    for (int i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
void change_Base_36(int dex, int B, char* str) {

    if (dex == 0) {
        *str = '\0';
        return;
    }
    int remainder = dex % B;
    int quotient = dex / B;
    if (remainder >= 10)
    {
        remainder -= 10;
        remainder += 'A';
    }
    else if (remainder < 10) {
        remainder += '0';
    }
    
    *str = remainder;
    str++;

    change_Base_36(quotient,B, str);
}

