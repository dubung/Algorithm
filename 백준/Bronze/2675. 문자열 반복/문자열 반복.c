#include <stdio.h>
#include <string.h>

int main() {

	char arrSource[20], arrRes[160] = { '\0', };
	int T, M;
	
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int cnt = 0;
		scanf("%d%s", &M, arrSource);
		for (int j = 0; j < strlen(arrSource); j++) {
			for (int k = 0; k < M; k++) {
				arrRes[j * M + k] = arrSource[j];
				cnt++;
			}
			
		}
		arrRes[cnt] = '\0';
		printf("%s\n", arrRes);
	}
	
	return 0;
}