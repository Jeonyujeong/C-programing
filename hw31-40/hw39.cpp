#include<stdio.h>
int main(void){
	int day, gold, i, j, count;

	printf("* 기사의 근무일수를 입력하시오 : ");
	scanf("%d", &day);

	gold=0;
	count=0;
	i=0;
	while(1){
		if(count==day)
			break;
		for(j=1; j<=i && count<day; j++){
//			printf("%d", i);
			gold += i;
			count++;

		}i++;
	}
	printf("근무일 : %d 일 / 총 금화 수 : %d 개 \n", day, gold);
	return 0;
}
