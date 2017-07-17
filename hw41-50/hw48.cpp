
#include<stdio.h>
int input(int*, int*, int*);
int dateCheck(int, int , int);
int yearCheck(int);
int totalDate(int , int, int);
void output(int, int, int, int);
void myflush();
int main(void){
	int year, mon, date;
	int check, total, res, TF;

	while(1){
		while(1){
			res = input(&year, &mon, &date);
			if(res!=3)
				return 0;
			TF = dateCheck(year, mon, date);
			if(TF)
				break;
		}
		total = totalDate(year, mon, date);
		output(total, year, mon, date);
	}
	return 0;


}
int input(int* year, int* mon, int* date){
	int res;
	printf("* 년 월 일을 입력하시오 : ");
	res = scanf("%d %d %d", year, mon, date);
	myflush();
	return res;
}
int dateCheck(int year, int mon, int date){
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	if(year<1900 || mon<0 || date<0)
		return 0;
	if(mon>12)
		return 0;
	if(yearCheck(year) && mon==2 && date==29)
		return 1;
	mon--;
	if(month[mon]<date)
		return 0;
	else 
		return 1;
}

int yearCheck(int year){
	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
				return 1;
			else
				return 0;
		}else
			return 1;//윤년
	}else 
		return 0;//평년
}
int totalDate(int year, int mon, int date){
	int i, total=0;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	for(i=1900; i<year; i++){
		if(yearCheck(i))
			total += 366;
		else
			total += 365;
	}
	//	printf("%d ", total);
	for(i=0; i<mon-1 ;i++){
		total += month[i];
	}
	total += date;
	//	printf("%d \n", total);
	if(yearCheck(year) && mon>=3){
		total++;
		printf("윤년\n");
	}
	return total;
}
void output(int totaldate, int year, int mon, int date){
	int i;
	char day[7][4] = {"일", "월", "화", "수", "목", "금", "토"};

	//	printf("%d\n", totaldate); 
	i = totaldate%7;
	//	printf("%d\n", i);
	//	printf("%s ", day[i]);

	printf("%d년 %d월 %d일은 %s요일입니다.\n\n", year, mon, date, day[i]);
}
void myflush(){
	while(getchar()!='\n');
}




