/* 작성자 : 전유정
   프로그램의 기능 : Pay계산하기 */

#include<stdio.h>
int input(){
	int workTime;

	printf("* 1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &workTime);

	return workTime;
}
int glossCal(int time){
	int pay, overPay;

	pay = time*3000;
	if(time>40){
		time-=40;
		overPay = time*1000*1.5;
		pay += overPay;
	}

	return pay;
}
int taxesCal(int pay){
	int tax, overtax;

	tax = pay*0.15;
	if(pay>100000){
		tax = 100000*0.15;
		pay-=100000;
		overtax = pay*0.25;
		tax += overtax;
	}


	return tax;
}
void output(int glossPay, int taxes){
	int netPay;

	netPay = glossPay-taxes;
	printf("# 총수입 : %d원\n", glossPay);
	printf("# 세  금 : %d원\n", taxes);
	printf("# 실수입 : %d원\n", netPay);
}
int main(void){
	int time, pay, tax;

	time = input();
	pay = glossCal(time);
	tax = taxesCal(pay);
	output(pay, tax);
	return 0;
}
