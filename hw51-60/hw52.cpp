#include<stdio.h>
void swap(int*, int);
int main(void){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, len;
	
	len = sizeof(a)/4;
//	printf("%lu\n", sizeof(a)/4);
	printf("처음 배열에 저장된 값 : ");
	for(i=0; i<len; i++)
		printf("%d ", a[i]);
	printf("\n");

	swap(a, len);
	
	printf("바뀐 배열에 저장된 값  :");
	for(i=0; i<len; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
void swap(int* arr, int len){
	int temp, i;
//	long unsigned int len;

//	printf("%lu\n", sizeof(arr)/4);
//	len = sizeof(arr)/4;
//	printf("%lu\n", len);

	for(i=0; i<len/2; i++){
		temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}
}
