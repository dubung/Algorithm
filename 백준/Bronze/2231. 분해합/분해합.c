#include<stdio.h>
#include<stdlib.h>
int getdigits(int num);
int main() {
    int a = 0;
    scanf("%d", &a);
    int source = 0;

    for (int i = 1; i < a; i++) {

        int sum = 0;

        source = i;

        for (int j = 0; j < getdigits(i); j++) {
            sum += source % 10;
            source /= 10;
        }

        sum += i;

        if (sum == a) {
            printf("%d", i);
            return 0;
        }

    }
    printf("0");
    return 0;
}

int getdigits(int num) {
    int count = 1;

    while (num /= 10) 
        count++;

    return count;
}
