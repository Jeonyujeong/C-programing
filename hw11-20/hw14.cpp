/* 작성자 : 전유정
   프로그램의 기능 : 문자열 생략하여 출력하기 */

#include<stdio.h>
#include<string.h>
int main(void){
	char input[20];
	int len, box, str;

	printf("* 문자열 입력 : ");
	scanf("%s", input);

	len = strlen(input);
	printf("[");
	for(box=len; box>len/2; box--)
		printf("□ ");
	for(str=0; str<len/2; str++)
		printf("%c", input[str]);
	printf("...]\n");
	return 0;
}
