#include<stdio.h>
int main(void){
	int n, i, j, k,l, res;

	while(1){
		printf("# 출력 라인수를 입력하시오 :");
		res=scanf("%d", &n);

		if(!res)
			break;

		for(i=0; i<n; i++){
			for(j=0; j<=i; j++)
				printf("*");
			for(k=0; k<n-i; k++)
				printf("  ");
			for(l=0; l<=i; l++)
				printf("*");
			printf("\n");
		}


	}
	return 0;
}
