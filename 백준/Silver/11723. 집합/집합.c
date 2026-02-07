
#include <stdio.h>

#define ALL 0b11111111111111111111
#define EMPTY 0

#define TRUE 1
#define FALSE 0

int gSet = 0;


void myAdd(int val); // 무시할수있음
void myRemove(int val); // 무시할수있음
unsigned char myCheck(int val); // val이 있으면 1 없으면 무시
void myToggle(int val);
void myAll(void);
void myEmpty(void);



int main() {

	
	int count = 0;
	int num = 0;
	char str[10];
	scanf("%d", &count);


	for (int i = 0; i < count; i++) {
		scanf("%s", &str);

		if (str[0] == 'a' && str[1] == 'l')
		{
			myAll();
		}
		else if (str[0] == 'e')
		{
			myEmpty();
		}
		else
		{
			scanf("%d", &num);
			switch (str[0])
			{
			case 'a':
				myAdd(num-1);
				break;
			case 'r':
				myRemove(num-1);
				break;
			case 'c':
				printf("%d\n", myCheck(num-1) ? 1 : 0);
				break;
			case 't':
				myToggle(num-1);
				break;
			}

		}


	}


	return 0;
}

void myAdd(int val) {
	gSet |= 1 << val;
}
void myRemove(int val) {
	if (gSet & 1 << val)
		gSet ^= 1 << val;
}
unsigned char myCheck(int val) {
	if (gSet & 1 << val)
		return TRUE;
	else
		return FALSE;
}
void myToggle(int val) {
	gSet ^= 1 << val;
}
void myAll(void) {
	gSet = ALL;
}
void myEmpty(void) {
	gSet = EMPTY;
}