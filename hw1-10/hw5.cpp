/* 작성자 : 전유정
   프로그램의 기능 : 전기요금 계산하기 */

#include<stdio.h>
int inputFunc();
void outputFunc(double);
int main(){
	int baserate = 660;
	double kwrate = 88.5;
	double wholerate;
	int usage;
	double tax;
	double lastrate;

	usage = inputFunc();
	wholerate = baserate+(usage*kwrate);
	tax = wholerate*0.09;
	lastrate = wholerate+tax; 
	outputFunc(lastrate);

	return 0;
}
int inputFunc(){
	int usage;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &usage);
	return usage;
}
void outputFunc(double lastrate){
	printf("전기 사용요금은 %lf 원 입니다.\n", lastrate);
}

