#include<stdio.h>
#include<string.h>
int input(int*);
int calcul(int, int);
void output(int, int, int, char*);
void myflush();
int main(void){
	int use_ton, code, code_ton, rate;
	char codename[20];

//	strcpy(codename, "(가정용)");
//	printf("%s\n",codename); 


	code = input(&use_ton);
	switch(code){
		case 1:
			code_ton = 50;
			strcpy(codename, "(가정용)");
			break;
		case 2:
			code_ton = 45;
			strcpy(codename, "(상업용)");
			break;
		case 3:
			code_ton = 30;
			strcpy(codename, "(공업용)");
			break;
	}
	rate = calcul(code_ton, use_ton);
	output(code, use_ton, rate, codename);
	return 0;

}
int input(int* ton){
	int code, r1, r2;

	while(1){
		printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
		r1 = scanf("%d", &code);
		myflush();
		if(r1==1)
			if(1<=code && code<=3)
				break;
	}
	while(1){
		printf("* 사용량을 입력하시오(ton단위) : ");
		r2 = scanf("%d", ton);
		myflush();
		if(r2==1) break;
	}
	return code;
}
int calcul(int codeton, int ton){
	int usage, whole;

	usage = ton*codeton;
	whole = usage + usage*0.05;
	return whole;
}
void output(int code, int ton, int whole, char* codename){
	printf("\n# 사용자코드 : %d%s\n", code, codename);
	printf("# 사용량 : %d ton\n", ton);
	printf("# 총수도요금 : %d원\n", whole);
}
void myflush(){
	while(getchar()!='\n');
}
