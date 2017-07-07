#include<stdio.h>
void temp(int* a, int*b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	int a = 3;
	int b = 7;
	int* p;
	int* q;

	p = &a;
	q = &b;

	temp(p, q);
	printf("a: %d, b: %d\n", *p, *q);
	
	return 0;
}
	
	
