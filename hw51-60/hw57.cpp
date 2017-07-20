#include<stdio.h>
#include<string.h>
#include<ctype.h>
void input(char*);
int PalindromeCheck(char*);
void output(int, char*);
int main(void){
	char str[50];
	int check;

	while(1){
		input(str);
//		printf("%s", str);
		if(strcmp(str, "end")==0)
			return 0;
		check = PalindromeCheck(str);
		output(check, str);
	}
}
void input(char* str){
	printf("# 단어 입력 : ");
	scanf("%s", str);
//	output(1, str);
//	printf("111");
}
int PalindromeCheck(char* str){
	int len, i;
	char rts[50], lowstr[50];
	char temp;

	len = strlen(str);
	strcpy(lowstr, str);
	for(i=0; i<len; i++){
		lowstr[i] = tolower(lowstr[i]);
	}

	strcpy(rts, lowstr);
	for(i=0; i<len/2; i++){
		temp = rts[i];
		rts[i] = rts[len-i-1];
		rts[len-i-1] = temp;
	}

	if(strcmp(lowstr, rts)==0)
		return 1;
	else
		return 0;
}
void output(int check, char* str){
	if(check)
		printf("\"%s\" : 회문입니다!\n\n", str);
	else
		printf("\"%s\" : 회문이 아닙니다!\n\n ", str);
}

