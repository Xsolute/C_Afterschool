#include <stdio.h>

int w4_1_3(void) {
	int num;
	scanf("%d", &num);
	if (num % 3 == 0 && num % 5 == 0) {
		printf("3�� ����̸鼭 5�� ����Դϴ�.\n");
	}
	return 0;
}