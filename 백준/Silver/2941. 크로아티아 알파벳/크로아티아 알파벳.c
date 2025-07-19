#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        // dz= 체크 (우선순위 1위)
        if (str[i] == 'd' && i + 2 < len && str[i+1] == 'z' && str[i+2] == '=') {
            count++;
            i += 2;  // dz= 는 3글자이므로 두 칸 더 건너뜀
        }
        // 나머지 크로아티아 알파벳 2글자 체크
        else if ((str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) ||
                 (str[i] == 'd' && str[i+1] == '-') ||
                 (str[i] == 'l' && str[i+1] == 'j') ||
                 (str[i] == 'n' && str[i+1] == 'j') ||
                 (str[i] == 's' && str[i+1] == '=') ||
                 (str[i] == 'z' && str[i+1] == '=')) {
            count++;
            i++;  // 2글자 처리했으니 한 칸 더 건너뜀
        }
        else {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
