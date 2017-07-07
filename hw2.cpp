/* 작성자 : 전유정
   프로그램의 기능 : 용돈 화폐단위 환산 프로그램 */

#include<stdio.h>
int main(){
	int money = 278970;
	int m50000 = 50000;
	int m10000 = 10000;
	int m5000 = 5000;
	int m1000 = 1000;
	int m500 = 500;
	int m100 = 100;
	int m50 = 50;
	int m10 = 10;
	
	printf("50000원권 => %d개\n", money/m50000);
	money -= m50000*(money/m50000);
	printf("10000원권 => %d개\n", money/m10000);
	money -= m10000*(money/m10000);
	printf("5000원권 => %d개\n", money/m5000);
	money -= m5000*(money/m5000);
	printf("1000원권 => %d개\n", money/m1000);
	money -= m1000*(money/m1000);
	printf("500원권 => %d개\n", money/m500);
	money -= m500*(money/m500);
	printf("100원권 => %d개\n", money/m100);
	money -= m100*(money/m100);
	printf("50원권 => %d개\n", money/m50);
	money -= m50*(money/m50);
	printf("10원권 => %d개\n", money/m10);
	money -= m10*(money/m10);

	return 0;
}
