/* 작성자 : 전유정
   프로그램의 기능 : 다섯명의 학생의 키를 입력받아 평균 출력하기 */

#include<stdio.h>
int main(void){
	double height, sum;
	int num=1;

	while(num<6){
		printf("- %d 번 학생의 키는? ", num);
		scanf("%lf", &height);
		sum += height;
		num++;
	}
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", sum/5);
	return 0;
}
