/* 작성자 : 전유정
   프로그램의 기능 : 입장료 계산 프로그램 */

#include<stdio.h>
void input();
void output(int, int);
int main(void){

	input();

}
void input(){
	int age;
	int number;

	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &number);

	output(age, number);
}
void output(int age, int number){
	int cash=0;
	int sale=0;

	if(age<8){
		cash=500*number;
		printf("입장료 => %d원\n", cash);
		if(number>5)
			sale=500*number*0.1;
		printf("할인금액 => %d원\n", sale);
		cash-=sale;
		printf("결제금액 => %d원\n", cash);
	}
	else if(age<14){
		cash=700*number;
		printf("입장료 => %d원\n", cash);
		if(number>5)
			sale=700*number*0.1;
		printf("할인금액 => %d원\n", sale);
		cash-=sale;
		printf("결제금액 => %d원\n", cash);
	}
	else if(age<20){
		cash=1000*number;
		printf("입장료 => %d원\n", cash);
		if(number>5)
			sale=1000*number*0.1;
		printf("할인금액 => %d원\n", sale);
		cash-=sale;
		printf("결제금액 => %d원\n", cash);
	}
	else if(age<56){
		cash=1500*number;
		printf("입장료 => %d원\n", cash);
		if(number>5)
			sale=1500*number*0.1;
		printf("할인금액 => %d원\n", sale);
		cash-=sale;
		printf("결제금액 => %d원\n", cash);
	}
	else{
		cash=500*number;
		printf("입장료 => %d원\n", cash);
		if(number>5)
			sale=500*number*0.1;
		printf("할인금액 => %d원\n", sale);
		cash-=sale;
		printf("결제금액 => %d원\n", cash);
	}
}
