#include <stdio.h>

int Input();
int Answer(int i);
int Output(int o, int i);

int main(void)
{
	int input = Input();
	int output = Answer(input);
	Output(output, input);
}

int Input()
{
	int i;
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &i);
	return i;
}

int Answer(int i)
{
	int o = 0;
	while(1)
	{
		if(i < 50 || i == 50)
		{
			o++;
			break;
		} else if(i < 0)
			break;
		i -= 30;
		o++;
	}
	return o;
}

int Output(int o, int i)
{
	printf("%.2f 미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", ((double)i / 100), o);
}
