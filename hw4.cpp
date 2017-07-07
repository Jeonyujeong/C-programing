/* 작성자 : 전유정
   프로그램의 기능 : 1년을 일,시,분,초로 환산하는 프로그램 */

#include<stdio.h>
int main(){
	double year = 365.2422;
	int date, hour, min;
	double sec;

	date = year;
	year -= date;
	hour = year*24;
	year = (year*24)-hour;
	min = year*60;
	year = (year*60)-min;
	sec = year*60;

	printf("365.2422일은 %d일 %d시간 %d분 %.2lf초입니다.\n",  date, hour, min, sec);
	return 0;
}
	
