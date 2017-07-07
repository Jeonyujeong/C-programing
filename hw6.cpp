/* 작성자 : 전유정
   프로그램의 기능 : 온도 변환하기 */

#include<stdio.h>
int inputFunc();
void outputFunc(double);
int main(){
	double C;
	int F;

	F = inputFunc();
	C = 5.0/9*(F-32);
	outputFunc(C);
 	return 0;
}
int inputFunc(){
	int F;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &F);
	return F;
}
void outputFunc(double C){
	printf("섭씨 온도는 %.1lf 도 입니다.\n", C);
}

