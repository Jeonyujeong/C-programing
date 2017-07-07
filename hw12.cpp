/* 작성자 : 전유정
   프로그램의 기능 : 이름을 영문으로 입력받아 출력하기 */

#include<stdio.h>
int main(void){
	char name[20];

	printf("이름을 입력하시오 : ");
	scanf("%[^\n]s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}
