#include <stdio.h>

int w4_1_0(void) {
	int a, b;
	printf("���� �Է�(2��) : ");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("ū �� : %d\n", a);
	}
	else {
		printf("ū �� : %d\n", b);
	}
	return 0;
}