#include<stdio.h>
void input(int startn, int endn, int* startp, int* endp){
	int res1, res2;
	
	printf("시작값 : ");
	scanf("%d", &startn);

	



}
int eofunc(int sn, int en){
	char check;
	while(1){
		printf("%d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o)", sn, en);
		scanf(" %c", &check);

		if(check=='e')
			return 0;
		else if(check=='o')
			return 1;
	}
}
void output(int* sp, int* ep){
	int sum, i, eo;
	int sn=*sp;
	int en=*ep;

	eo = eofunc(sn, en);
	if(eo==0){
		printf("%d~%d 까지의 짝수(", sn, en);
		for(i=sn; i<en; i++){
			if(!sn%2){
				printf("%d ", sn);
				sum+=sn;
			}
		}
	}
	else{
		printf("%d~%d 까지의 홀수(", sn, en);
		for(i=sn; i<en; i++){
			if(sn%2){
				printf("%d ", sn);
				sum+=sn;
			}
		}
	}
	printf(")의 합은 %d 입니다.", sum);
}
int main(void){
	int sn, en;
	int *sp, *ep;


	input(sn, en, sp, ep);
	output(sp, ep);
	return 0;
}
