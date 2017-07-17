#include<stdio.h>
void myflush();
char menu();
int inputInt(char*);
void deposit(int*);
void withdraw(int*);
void showbal(int*);
int main(void){
	int bal=0;
	char mchar;

	showbal(&bal);
	while(1){
		mchar = menu();
		if(mchar == 'q')
			break;
		switch(mchar){
			case 'i' : 
				deposit(&bal);
				break;
			case 'o' : 
				withdraw(&bal);
				break;
			default : 
				printf("* 잘못 입력하셨습니다.\n\n");
		}
	}
	return 0;
}
char menu(){
	char mchar;

	printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : "); 
	scanf("%c", &mchar);
	myflush();
	return mchar;
}
int inputInt(char* string){
	int money, res;
	
	printf("%s", string);
	while(1){
		res = scanf("%d", &money);
		myflush();
		if(money<0 || res!=1)
			printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
		else 
			break;
	}
	return money;

}
void deposit(int* bp){
	int money;
	char str[] = "# 입금액을 입력하세오 : ";

	money = inputInt(str);
	*bp += money;
	showbal(bp);
}
void withdraw(int* bp){
	int money;
	char str[] = "# 출금액을 입력하세요 : ";

	money = inputInt(str);
	if(*bp-money<0)
		printf("* 잔액이 부족합니다.\n");
	else
		*bp -= money;
	showbal(bp);
}
void showbal(int* bp){
	printf("* 현재 잔액은 %d원 입니다.\n\n", *bp);
}
void myflush(){
	while(getchar()!='\n');
}

