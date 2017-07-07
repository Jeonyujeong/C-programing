/* 작성자 : 전유정
   프로그램의 기능 : 초 수를 시, 분, 초단위로 환산하는 프로그램 */

#include<stdio.h>
int main(){
	int time = 54321;
	int hour, min, sec;

	hour = time/3600;
	min = (time%3600)/60;
	sec = (time%3600)%60;

	printf("54321초는 %d시간 %d분 %d초 입니다.\n", hour, min, sec);
	return 0;
}
