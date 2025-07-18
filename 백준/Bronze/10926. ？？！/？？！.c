#include <stdio.h>
int main() {

    char str[50];
    char source[] = "??!";
    scanf("%s", str);
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {

    }
    int j = 0;
    for (j = 0; j < 4; j++) {
        str[i + j] = source[j];
    }

    printf("%s", str);

    return 0;
}