#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void randomNum(int (*)[4]);
void sumPrint(int (*)[4]);
int main(void){
	int num[3][4];
	
	srand((unsigned int)time(NULL));
	randomNum(num);
	sumPrint(num);
	return 0;

}
void randomNum(int (*num)[4]){
	int i, j;

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			num[i][j] = rand()%10;
		}
	}
}
void sumPrint(int (*num)[4]){
	int i, j, rsum=0, csum=0;

	for(i=0; i<3; i++){
		printf("%d행 \t: ",i);
		for(j=0; j<4; j++){
			printf("%3d", num[i][j]);
			rsum += num[i][j];
		}
		printf("\t\t%d 행의 합 : %d\n", i, rsum); 
	}
	printf("열의 합\t: ");
	for(j=0; j<4; j++){
		for(i=0; i<3; i++){
			csum += num[i][j];
		}
		printf("%3d", csum);
	}
	printf("\n");
}

