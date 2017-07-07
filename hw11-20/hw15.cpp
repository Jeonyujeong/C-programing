/* 작성자 : 전유정
   프로그램의 기능 : BMI 구하기 */

#include<stdio.h>
void input();
double bmifunc(int, double);
void output(double);
int main(void){

	input();

}
void input(){
	int weight;
	double height;

	printf("몸무게를 입려하세요(kg) : ");
	scanf("%d", &weight);
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);

	bmifunc(weight, height);
}
double bmifunc(int kg, double m){
	double bmi;

	bmi = kg/(m*m);
	output(bmi);

}
void output(double bmi){
	if(bmi<18.5)
		printf("당신의 BMI는 %.1lf으로 저체중입니다.\n", bmi);
	else if(bmi<25.0)
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n", bmi);
	else if(bmi<30.0)
		printf("당신의 BMI는 %.1lf으로 과체중입니다.\n", bmi);
	else if(bmi<40.0)
		printf("당신의 BMI는 %.1lf으로 비만입니다.\n", bmi);
	else
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n", bmi);	
}
