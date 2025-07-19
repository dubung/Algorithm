
#include <stdio.h>
#include<stdlib.h>
int main() {

    char** pMatrix = (char**)malloc(sizeof(char*) * 6);

    if (pMatrix == NULL) {
        return 1;
    }        
    for (int i = 0; i < 5; i++) {
        pMatrix[i] = (char*)malloc(sizeof(char) * 16);
        if (pMatrix[i] == NULL)
            return 1;
    }
    for (int i = 0; i <5; i++) {
        scanf("%s", pMatrix[i]);
    }

    for (int i = 0; i < 5 * 15; i++) {
        if (('a' <= pMatrix[(i % 5)][(i / 5)] && pMatrix[(i % 5)][(i / 5)] <= 'z') ||
            ('0' <= pMatrix[(i % 5)][(i / 5)] && pMatrix[(i % 5)][(i / 5)] <= '9') ||
            ('A' <= pMatrix[(i % 5)][(i / 5)] && pMatrix[(i % 5)][(i / 5)] <= 'Z'))
            printf("%c", pMatrix[(i % 5)][(i / 5)]);
    }

    for (int i = 0; i < 5; i++) {
        free(pMatrix[i]);
    }
    free(pMatrix);
    return 0;
}

