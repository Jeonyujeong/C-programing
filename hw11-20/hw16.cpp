/* 작성자 : 전유정
   프로그램의 기능 : 지하철 요금 계산하기 */

#include<stdio.h>
int input();
int cal(int);
void output(int);
int main(void){
	int count=0;
	int number;
	int fee;

	while(count<5){
		number = input();
		fee = cal(number);
		output(fee);	
		count++;
	}
	return 0;
}
int input(){
	int number;

	printf("역수를 입력하시오 : ");
	scanf("%d", &number);

	return number;
}
int cal(int num){
	int fee=800;
	int i, j;

	if(0<num && num<6)
		return 600;
	else if(5<num && num<11)
		return 800;
	else{
		num -= 10;
		for(i=1; (num/4>0 || num/3>0); i++){
			fee = fee+200;
			num -= 4;
		}
		for(j=1; (num/2>0 || num/1>0); j++){
			fee = fee+100;
			num -= 2;
		}
		return fee;
	}
}
void output(int fee){
	printf("요금 : %d원\n", fee);
}





