#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Input(int min, int max)
{
	int i = 0;
	int res;
	while(1)
	{
		printf("# 숫자를 입력하시오 : ");
		res=scanf("%d", &i);
		if(i < min || i > max || res!=1 ){
			printf("%d ~ %d사이의 숫자를 입력하시오 !!!!!\n", min, max);
			getchar();
		}
		else
			break;
	}
	return i;
}

int Output()
{
	srand((unsigned int)time(NULL));
	int num = (rand() % 100) + 1;
	int max = 100, min = 0, i = 0;
	while(1)
	{
		i++;
		int input = Input(min, max);
		if(input < num)
		{
			min = input;
		}else if(input > num)
		{
			max = input;
		}else
			return i;
		printf("%d보다 크고 %d보다 작습니다.\n",min, max);
	}
}

int main(void)
{
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", Output());
}
