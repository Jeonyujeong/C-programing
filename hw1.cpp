/* 작성자 : 전유정
   프로그램의 기능 : 나에 대한 정보를 출력하는 프로그램 */

#include<stdio.h>
void printAge(int);
void printHeight(double);
int main(){
	char name[20] = "홍길동";
	int age = 500;
	double height = 170.8;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}
void printAge(int age){
	printf("나이 : %d\n", age);
}
void printHeight(double height){
	printf("키 : %lf\n", height);
}
