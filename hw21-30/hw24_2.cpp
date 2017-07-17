#include<stdio.h>
int input();
int calculator(int);
void output(int, int);

int main(void){
	int deep, day;
	
	deep = input();
	day = calculator(deep);
	output(day, deep);
	return 0;


}
int input(){
	int deep;

	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &deep);
	return deep;
}
int calculator(int input){
	int i, cal, day;
	cal = 0;
	day = 0;

	while(input!=0){
		cal +=50;
		if(input<=cal){
			day++;
			break;
		}
		cal -=20;
		day++;
	}
	return day;
}
void output(int day, int input){
	printf("%.2lf 미터 깊이의우물을 탈출하기 위해서는 %d일이 걸립니다.\n", (double)input/100, day);
}
