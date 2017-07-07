/* 작성자 : 전유정
   프로그램의 기능 : 이름의 글자 수 출력하기 */

#include<stdio.h>
#include<string.h>
int main(void){
	char lastname[10];
	char firstname[10];
	int len;
	int i, j;

	printf("#성을 입력하시오 : ");
	scanf("%s", lastname);
	printf("#이름을 입력하시오 : ");
	scanf("%s", firstname);

	printf("%s\t %s\n", lastname, firstname);
	
	len = strlen(lastname);
	for(i=1; i<len ; i++)
		printf(" ");
	printf("%d\t", i);

	len = strlen(firstname);
	for(j=0; j<len ; j++)
		printf(" ");
	printf("%d\n", j);

	return 0;
}
