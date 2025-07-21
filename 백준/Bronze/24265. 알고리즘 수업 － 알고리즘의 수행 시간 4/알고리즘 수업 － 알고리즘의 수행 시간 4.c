#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long cnt =0;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++)
            cnt++;
    }
    printf("%lld\n2", cnt);

    return 0;
}
