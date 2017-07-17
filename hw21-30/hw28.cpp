#include<stdio.h>
int main(void){
	char ch;
	int english=0, number=0, null=0, etc=0;
	
	printf("# 영문 문장을 입력하시오 :\n");
	while(1){
		ch = getchar();
		if(ch == '\n'){
			ch = getchar();
			if(ch == EOF){
				break;
			}
		}

		if('a'<=ch && ch<='z')
			english++;
		else if('A'<=ch && ch<='Z')
			english++;
		else if('0'<=ch && ch<='9')
			number++;
		else if(ch==' ' || ch=='\t' || ch=='\n')
			null++;
		else
			etc++;
	}
	printf("\n* 영문자 대소문자 개수 : %d\n", english);
	printf("* 숫자문자 개수 : %d\n", number);
	printf("* 여백문자(space, tab, enter) 개수 : %d\n", null);
	printf("* 그 외 기타문자 개수 : %d\n", etc);

	return 0;
}

