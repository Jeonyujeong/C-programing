#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int input(){
	int num, res;

	while(1){
		printf("# 숫자를 입력하시오 :");
		res = scanf("%d", &num);
		if(res && num>0&&num<101)
			break;
		getchar();
	}

	return num;
}
int output(){
	int random, num, count, max, min;

	srand( (unsigned int)time (NULL) );
	random = rand()%100;
	max=100;
	min=0;
	count=0;

	printf("%d\n", random);
	while(1){
		num = input();
		if(random>num){
			min=num;
		}
		else if(random<num){
			max=num;
		}
		else
			break;
		printf("%d 보다 크고 %d 보다 작습니다.\n", min, max);
		count++;
	}
	return count;
}
int main(void){
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 안에 맞추셨습니다.\n", output());
	return 0;
}
