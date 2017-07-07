/* 작성자 : 전유정
   프로그램의 기능 : ASCII code 를 입력받아 ASCII code에 해당문자 출력하기 */

#include<stdio.h>
int main(void){
	int ascii;

	printf("ASTCII code값을 입려하시오 : ");
	scanf("%d", &ascii);

	printf("%d은 '%c'의 ASCII code 입니다.\n", ascii, ascii);
	return 0;
}
