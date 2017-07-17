#include<stdio.h>
int main(void){
	int num, i, res;
	unsigned int mask;
	
	i=0;
	mask = 0x80000000;
	printf("10진 정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d(10) = ", num);
	while(i<32){
		if(num&mask)
			printf("1");
		else
			printf("0");
		mask=mask>>1;
		i++;
	}
	printf("(2)\n");

	return 0;
}
