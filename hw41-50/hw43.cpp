#include<stdio.h>
int main(void){
	int i, j;
	char alpha, temp;

	while(1){
		printf("* 영문자 대문자 입력('A~'Z'): ");
		scanf("%c", &alpha);
		getchar();
		if(alpha<'A' || 'Z'<alpha)
			break;
		temp=alpha;

		for(i=0; i<=alpha-'A'; i++){
			temp = alpha;	
			for(j=0; j<=i; j++){
				printf("%c", temp--);
			}
			printf("\n");
		}
	}
	return 0;
}



