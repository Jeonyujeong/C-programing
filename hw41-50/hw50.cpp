#include<stdio.h>
#define N 5
void input(double*);
double maxNumber(double*);
double minNumber(double*);
void output(double, double);
void myflush();
int main(void){
	double room[N];
	double max, min;

	input(room);
	max = maxNumber(room);
	min = minNumber(room);
	output(max, min);
	return 0;
}
void input(double* room){
	double num;
	int i, res;

	for(i=0; i<N; ){
	printf("%d 번 방 값 : ", i);
	res = scanf("%lf", &room[i]);
	myflush();
	if(res==1)
		i++;
	}
//	myflush();
}
double maxNumber(double* arr){
	double max;
	int i;

	max = arr[0];
	for(i=0; i<N; i++){
		if(max<=arr[i])
			max=arr[i];
	}
	return max;
}
double minNumber(double* arr){
	double min;
	int i;

	min = arr[0];
	for(i=0; i<N; i++){
		if(min>arr[i])
			min=arr[i];
	}
	return min;
}
void output(double max, double min){
	printf("\n가장 큰 값 : %.2lf\n", max);
	printf("가장 작은 값 : %.2lf\n", min);
}
void myflush(){
	while(getchar()!='\n');
}
