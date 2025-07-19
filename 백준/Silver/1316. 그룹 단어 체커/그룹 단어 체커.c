#include <stdio.h>
#include <string.h>

int main() {

    int a = 0;
    scanf("%d", &a);
    int count = 0;
    for (int i = 0; i < a; i++) {
        char str[101];
        int group[27] = { 0, };
        scanf("%s", str);
        int len = strlen(str);

        char currentchar = str[0];
        

        for (int j = 0; j < len; j++) {
            if (str[j] != currentchar) {

                group[currentchar - 'a'] = 2;
                currentchar = str[j];

                if (group[currentchar - 'a'] == 0)
                    group[currentchar - 'a'] = 1;
                else if (group[currentchar - 'a'] == 2) {
                    break;
                }
                    
            }
            if (j == len - 1)
                count++;
        }


    }


    printf("%d\n", count);

    return 0;
}
