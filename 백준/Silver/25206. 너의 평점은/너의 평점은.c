#include <stdio.h>
#include <string.h>

int find(char* arr, int size);

int main() {

    double sum = 0;
    int count = 0;

    for (int i = 0; i < 20; i++) {
        char str[51] = { '\0', };
        double arrGrade[6] = {4.,3.,2.,1.,0.};
        gets(str);

        int len = strlen(str);
        int iIndex = find(str, len);
        int Hakjum = str[iIndex] - '0';

        double grade = 0;
        if (str[iIndex + 4] != 'P') {
            grade = (str[iIndex + 4] - 'A') >= 0 ? arrGrade[(str[iIndex + 4] - 'A')] :0;
            grade += (str[iIndex + 5] == '+') ? 0.5 : 0;
            count+= Hakjum;
        }
        else {
            continue;
        }
        sum += grade * Hakjum;

    }


    printf("%lf", sum/count);

    return 0;
}

int find(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == ' ')
            return i+1;
    }
    return -1;
}