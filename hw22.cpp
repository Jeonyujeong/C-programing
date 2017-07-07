/* 작성자 : 전유정
   프로그램의 기능 : 한줄에 5개씩 별 출력하기 */

#include<stdio.h>
int input(){
	int num;

	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &num);
	return num;
}
int main(void){
	int num, i=0;

	num = input();
	while(i<num){
		if(i%5==0 && i!=0)
			printf("\n");
		printf("*");
		i++;
	}
	printf("\n");
	return 0;
}
	
