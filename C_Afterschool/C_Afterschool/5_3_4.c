#include <stdio.h>
#define MAX 1000
int w5_3_4(void) {
	long long int num[MAX] = { 0 };
	int input, i;
	scanf("%d", &input);
	if (input >= 3) {
		for (i = 0; i < 2; i++) {
			num[i] = 1;
		}
		for (i = 2; i < input; i++) {
			num[i] = num[i - 2] + num[i - 1];
		}
		for (i = 0; i < input; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
	}
	else {
		printf("�߸��� �Է��Դϴ�.");
		return 0;
	}
	return 0;
}