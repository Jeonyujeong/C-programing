#include<stdio.h>
#include<string.h>
int input(char*, char*);
int strcheck(char *, char);
void output(char*, char, int);
void myflush();
int main(void){
	char str[100];
	char ch;
	int endcheck, index;

	while(1){
	endcheck = input(str, &ch);
	if(endcheck==0)
		return 0;
	index = strcheck(str, ch);
	output(str, ch, index);
	}

}
int input(char* str, char* ch){

	printf("# 문자열을 입력하시오 : ");
	scanf("%s", str);
	myflush();
	if(strcmp(str, "end")==0)
		return 0;
	printf("# 문자를 입력하시오 : ");
	scanf("%c", ch);
	myflush();
	return 1;
}
int strcheck(char* str, char ch){
	int len, i;

	len = strlen(str);
//	printf("%d\n", len);
	for(i=0; i<len; i++){
		if(str[i]==ch)
			return i;
	}
	return -1;
}
void output(char* str, char ch, int index){
	printf("\"%s\"문자열 안에 \'%c\'문자는 ", str, ch);
	if(index==-1)
		printf("존재하지 않습니다.\n");
	else
		printf("%d 번 위치에 존재합니다.\n", index);
	printf("\n");
}
void myflush(){
	while(getchar()!='\n');
}
