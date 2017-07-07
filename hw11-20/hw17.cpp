/* 작성자 : 전유정
   프로그램의 기능 : 성명, 키, 성별을 입력받아 수행되는 프로그램 */

#include<stdio.h>
int main(void){
	char name[20];
	double height;
	char sex;

	printf("# 성명 입력 : ");
	scanf("%[^\n]s",name);
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &height);
	printf("# 성별입력(M/F) : ");
	scanf("%s", &sex);

	if(sex=='M'||sex=='m')
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n", name, height);
	else
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, height);

	return 0;
}


