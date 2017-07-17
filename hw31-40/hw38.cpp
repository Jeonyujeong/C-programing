#include<stdio.h>
int main(void){
	int n1=1, n2=1, n3, i, input, sum=0;

	printf("피보나치 수열의 함수를 입력하시오 : ");
	scanf("%d", &input);

	printf("%d + %d + ",n1, n2);
	sum = n1+n2;
	for(i=0; i<input-2; i++){
		n3 = n1+n2;
		printf("%d + ", n3);
		n1 = n2;
		n2 = n3;
		sum += n3;
	}
	printf("\b\b = %d\n", sum);
	//	n3 = n1+n2;
	return 0;
}

