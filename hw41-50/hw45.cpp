#include<stdio.h>
#include<math.h>
int input(){
	int n;

	printf("*정수값 하나를 입력하시오 :");
	scanf("%d", &n);
	return n;
}
int primeNumber(int number){
	int check, max, i;

	if(number==1)
		return 0;
	max = (int)sqrt(number);
	for(i=2; i<=max; i++){
		check = number % i;
		if(check==0)
			return 0;
	}
	return 1;
}
int main(void){
	int num, i, count, res;

	count=0;
	num = input();
	printf("1~%d까지의 소수 값은 다음과 같습니다.\n", num);
	for(i=1; i<num; i++){
		res = primeNumber(i);
		if(res){
			printf("%d\t", i);
			count++;
			if(count%5==0)
				printf("\n");
		}
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.\n", num, count);
	return 0;
}
