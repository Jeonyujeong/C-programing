/* 작성자 : 전유정
   프로그램의 기능 : 반복적으로 두개의 정수를 입력받아 두수의 차를 출력하기 */

#include<stdio.h>
int main(void){
	int n1, n2;
	int check;

	while(1){
		printf("# 두개의 정수를 입력하세요 : ");
		check = scanf("%d %d", &n1, &n2);
		if(check!=2)
			break;
		else{
			if(n1<n2)
				printf("%d - %d = %d\n", n2, n1, n2-n1);
			else
				printf("%d - %d = %d\n", n1, n2, n1-n2);
		}
	}
	return 0;
}
