#include<stdio.h>
int main(void){
	int i, j, k;

	for(i=1; i<10; i++){
		for(j=2; j<6; j++){
			printf("%d*%d= %d\t\t", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1; i<10; i++){
		for(j=6; j<10; j++){
			printf("%d*%d= %d\t\t", j, i, i*j);
		}
		printf("\n");
	}
	printf("-------------------------------------------------------\n");

	for(i=2; i<9; i+=4){
		for(j=1; j<10; j++){
			for(k=i; k<i+4; k++){
				printf("%d*%d= %d\t\t", k, j, k*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");

	
	return 0;
}
