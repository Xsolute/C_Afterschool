#include <stdio.h>

int w5_1_3(void) {
	double num, temp, sum=0;
	double result = 0;
	printf("������ ������ �Է��Ͻʽÿ� : \n");
	scanf("%lf", &num);
	int i = num;
	while (i > 0) {
		scanf("%lf", &temp);
		sum += temp;
		i--;
	}
	result = sum / num;
	printf("%lf\n", result);
	return 0;
}