/* 작성자 : 전유정
   프로그램의 기능 : 주행거리와 시속을 입력받아 주행시간 계산하기 */

#include<stdio.h>
int main(){
	double distance;
	double speed;
	double time;
	int hour;
	int min;
	double sec;


	printf("거리를 입력하시요(km단위) : ");
	scanf("%lf", &distance);

	printf("시속을 입력하시어(km/h단위) : ");
	scanf("%lf", &speed);

	printf("%.1lf\n", distance);
	time = distance/speed;

	hour = time;
	time -= hour;
	min = time*60;
	time = time*60- min;
	sec = time*60;

	printf("%.2lf km => %d시간 %d분 %.3lf 초 소요됨.\n ", distance, hour, min, sec);
	return 0;
		
}

