#include <stdio.h>

int w4_2_0(void) {
	int a, b, c, max;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) max = a;
		else max = c;
	}
	else {
		if (b > c) max = b;
		else max = c;
	}
	printf("���� ū ���� %d�Դϴ�.\n", max);
	return 0;
}