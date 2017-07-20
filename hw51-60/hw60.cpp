#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
#define M 5
void randomNum(int (*)[M]);
void arrPrint(int (*)[M]);
void sumPrint(int (*)[M]);
int main(void){
	int num[N][M];
	
	srand((unsigned int)time(NULL));
	randomNum(num);
	arrPrint(num);
	sumPrint(num);
	return 0;

}
void randomNum(int (*num)[M]){
	int i, j;

	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			num[i][j] = rand()%10;
		}
	}
}
void arrPrint(int (*num)[M]){
	int i, j;

	for(i=0; i<N; i++){
		printf("%d번 행 : ", i);
		for(j=0; j<M; j++){
			printf("%2d ", num[i][j]);
		}
		printf("\n");
	}
}
void sumPrint(int (*num)[M]){
	int i, j, sum1=0, sum2=0, sum3=0;

	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			if(i==j)
				sum1 += num[i][j];
			else if(i<j)
				sum2 += num[i][j];
			else
				sum3 += num[i][j];
		}
	}
	printf("\nsum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d\n", sum3);
}
