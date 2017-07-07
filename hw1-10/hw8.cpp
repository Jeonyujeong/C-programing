/* 작성자 : 전유정
   프로그램의 기능: 세 과목 점수 입력받아 총점, 평균 출력하기 */

#include<stdio.h>
int main(void){
	int history, literature, artistic, sum;
	double average;

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &history, &literature, &artistic);

	sum = history + literature + artistic;
	average = sum/3.0;

	printf("총점은 %d 이고 평균은 %.2lf 입니다.\n", sum, average);
	return 0;
}
