#include<stdio.h>
int transNumber(int);
void inputUInt(int*, int*, int*);
void output(int , int , int);
int main(void){
	int p1, p2, n;
	inputUInt(&p1, &p2, &n);
	//	printf("%d %d %d\n", p1, p2, n);
	output(p1, p2, n);
	return 0;
}
void inputUInt(int *p1, int *p2, int *n){
	int r1, r2, r3;

	while(1){
		printf("시작 값(P1) : ");
		r1 = scanf("%d", p1);
		getchar();
	//	printf("%d\n", r1);
		if(p1>0 && r1==1)
			break;
	}
	while(1){
		printf("끝 값(P2) : ");
		r2 = scanf("%d", p2);
		getchar();
		if(p2>0 && r2==1)
			break;
	}
	while(1){
		printf("고집수(N) : ");
		r3 = scanf("%d", n);
		getchar();
		if(n>0 && r3==1)
			break;
	}

}
int transNumber(int num){
	int n1, n2, n3, n4;
	if(num<10){
		n1 = num;
		return n1;
	}
	else if(num<100){
		n2 = num/10;
		n1 = num%10;
		return n1*n2;
	}
	else if(num<1000){
		n3 = num/100;
		n2 = (num%100)/10;
		n1 = (num%100)%10;
		return n1*n2*n3;
	}
	else{
		n4 = num/1000;
		n3 = num%1000/100;
		n2 = num%1000%100/10;
		n1 = num%1000%100%10;
		return n1*n2*n3*n4;
	}
}
void output(int p1, int p2, int n){
	int count, nextnum, num=0;
	printf("고집수가 %d인 숫자 출력\n", n);
	nextnum = p1;
	//	printf("nextnum : %d\n", nextnum);
	while(p1<p2){
		nextnum=p1;
		for(count=0; nextnum>10; count++){
			//			printf("%d->", nextnum);
			nextnum = transNumber(nextnum);
		}
		//		printf("%d\n", nextnum);
		if(count==n){
			printf("%d\n", p1);
			num++;
		}
		p1++;
	}
	printf("총 개수 : %d개\n",num );
}












