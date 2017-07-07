/* 작성자 : 전유정
   프로그램의 기능 : 두 정수를 입력받아 합, 차, 곱, 몫의 값을 출력하는 프로그램 */

#include<stdio.h>
int main(void){
	int num1, num2;

	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	printf("%d+%d = %d\n", num1, num2, num1+num2);
	printf("%d-%d = %d\n", num1, num2, num1-num2);
	printf("%d*%d = %d\n", num1, num2, num1*num2);
	printf("%d/%d = %.2lf\n", num1, num2, (double)num1/num2);
	
	return 0;
}
