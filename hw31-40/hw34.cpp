#include<stdio.h>
#include<string.h>
void masking(char);
int menu();
char openFan(char, int);
char offFan(char, int);
char reverseFan(char);
void displayFan(char);
int showInput(char*, char*, int);
void myflush(){
	while(getchar()!='\n');
}
int main(void){
	char fan;
	int choice, fanNum;
	char str[50], OnOff[50];

	while(1){
		choice = menu();
		switch(choice){
			case 1:
				strcpy(str, "Fan 열기 작업 실행 화면");
				strcpy(OnOff, "OPEN");
				fanNum = showInput(str, OnOff, choice);
				fan = openFan(fan, fanNum);
				displayFan(fan);
				break;
			case 2:
				strcpy(str, "Fan 닫기 작업 실행 화면");
				strcpy(OnOff, "CLOSE");
				fanNum = showInput(str, OnOff, choice);
				fan = offFan(fan, fanNum);
				displayFan(fan);
				break;
			case 3:
				strcpy(str, "Fan 전체 전환 작업 실행 화면");
				strcpy(OnOff, "전체 FAN의 상태가 전환되었습니다.(ON, OFF 상태 뒤바뀜)");
				fanNum = showInput(str, OnOff, choice);
				fan = reverseFan(fan);
				displayFan(fan);
				break;
			case 4:
				return 0;
			default:
				;
		}
	}
}
int menu(){
	int num, res;

	while(1){
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		res = scanf("%d", &num);
		myflush();
		if(res==1 && 1<=num && num<=4)
			break;
	}
	return num;
}
char openFan(char fan, int fanNum){
	char mask=1;
	int i;

	for(i=1; i<fanNum; i++)
		mask=mask<<1;
	fan = fan | mask;
	return fan;
}
char offFan(char fan, int fanNum){
	char mask=1;
	int i;

//	masking(mask);
	for(i=1; i<fanNum; i++)
		mask = mask<<1;
	fan = ~fan;
	fan = fan | mask;
	fan = ~fan;
	return fan;
}
char reverseFan(char fan){
	fan = ~fan;
	return fan;
}
void displayFan(char fan){
	unsigned char mask=0x80;
	int ONOFF[8];
	int i;

	printf("-------------------------------------------------------\n");
	for(i=7; i>=0; i--){
		if(mask&fan)
			ONOFF[i] = 1;
		else
			ONOFF[i] = 0;
		mask = mask>>1;
		printf("%d번FAN  ", i+1);
	}
	printf("\n");
	for(i=8; i>0; ){
		if(ONOFF[--i]==1)
			printf("ON\t");
		else
			printf("OFF\t");
	}
	printf("\n-------------------------------------------------------\n");
	

}

int showInput(char* str, char * OnOff, int num){
	int fanNum, res;

	printf("-------------------------------------------------------\n");
	printf("\t%s\n", str);
	printf("-------------------------------------------------------\n");
	if(num==1 || num==2){
		while(1){	
			printf("* %s할 FAN 번호를 입력하시오(1-8) : ", OnOff);
			res = scanf("%d", &fanNum);
			if(res==1 && 1<=fanNum && fanNum<=8)
				break;
		}
		return fanNum;
	}
	else{
		printf("%s\n", OnOff);
		return 0;
	}
}
void masking(char fan){
	int  i, res;
	unsigned char  mask;

	i=0;
	mask = 0x80;
	while(i<sizeof(char)*8){
		if(fan&mask)
			printf("1");
		else
			printf("0");
		mask=mask>>1;
		i++;
	}
	printf("(2)\n");

}
