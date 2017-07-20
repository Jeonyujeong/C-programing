#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(char*);
int numberSum(char*);
void output(char*, int);
int main(void){
	char str[100];
	int sum;

	while(1){
		input(str);
		if(strcmp(str, "end")==0)
			return 0;
		sum = numberSum(str);
		output(str, sum);
	}

}
void input(char *str){
	printf("# 문장을 입력하시오 : ");
	scanf("%s", str);
}
int numberSum(char* str){
	int sum=0, i, j;
	char ch;
	char numstr[100];
	
	for(i=0; str[i]!='\0'; i++){
		if('0'<=str[i] && str[i]<='9'){
			numstr[j]=str[i];
			j++;
		}
		else{
			numstr[j]='\0';
			sum += atoi(numstr);
	//		printf("%d\n", atoi(numstr));
			for( ; j>0; j--)
				numstr[j]=0;
		}
	}
	numstr[j]='\0';
	sum += atoi(numstr);
	for(; j>0; j--)
		numstr[j]=0;
	return sum;
}
void output(char* str, int sum){
	printf("\"%s\" 내의 총 숫자는 [%d]입니다.\n\n", str, sum);
}


