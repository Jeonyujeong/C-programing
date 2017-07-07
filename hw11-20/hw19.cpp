/*  작성자 : 전유정
	프로그램의 기능 : 윤,평년 구하는 프로그램 */

#include<stdio.h>
int input();
int yearCheck(int);
void output(int, int);
int main(void){
	int year;
	int check;

	year = input();
	check = yearCheck(year);
	output(check, year);

}
int input(){
	int year;

	printf("년도를 입력하시오 : ");
	scanf("%d", &year);

	return year;
}
int yearCheck(int year){
	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
				return 1;
			else
				return 0;
		}else
			return 1;
	}else 
		return 0;
}
void output(int check, int year){
	if(check==1)
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	else
		printf("%d년은 평년(Common year)입니다.\n", year);
}
