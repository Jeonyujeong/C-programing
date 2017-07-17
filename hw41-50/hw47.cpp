//#include<Windows.h>
#include<curses.h>
#include<stdlib.h>
#include<stdio.h>
void inputxy(int*, int*, int*, int*);
void boxdraw(int, int, int, int);
void gotoxy(int, int);
int controlxy(int*, int*, int*, int*);
int main(void) {
	int sx, ex, sy, ey, esc;

	inputxy(&sx, &ex, &sy, &ey);
	while (1) {
		boxdraw(sx, ex, sy, ey);
		esc = controlxy(&sx, &ex, &sy, &ey);
		if (esc == 0)
			return 0;
		system("clear");
	}
}

void gotoxy(int x, int y)
#define gotoxy(x,y) wmove(stdscr,y-1,x-1)


	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void inputxy(int *sx, int *ex, int *sy, int *ey) {
	printf("sx 좌표입력(0~70) : ");
	scanf("%d", sx);
	printf("ex 좌표입력(31~78) : ");
	scanf("%d", ex);
	printf("sy 좌표입력(1~20) : ");
	scanf("%d", sy);
	printf("ey 좌표입력(11~24) : ");
	scanf("%d", ey);
}

void boxdraw(int sx, int ex, int sy, int ey) {
	int x = sx;
	int y = sy;
	while(sx < ex) {
		gotoxy(sx, sy);
		printf("*");
		gotoxy(sx, ey);
		printf("*");
		sx++;
	}
	while(sy < ey) {
		gotoxy(x, sy);
		printf("*");
		gotoxy(ex, sy);
		printf("*");
		sy++;
	}
}
int controlxy(int* sx, int* ex, int* sy, int* ey) {
	char dir;

	dir = getchar();
	switch (dir) {
		case 'w':
			*sy -= 1;
			*ey -= 1;
			break;
		case 'a':
			*ex -= 1;
			*sx -= 1;
			break;
		case 'd':
			*sx += 1;
			*ex += 1;
			break;
		case 's':
			*sy += 1;
			*ey += 1;
			break;
		case 27:
			return 0;
	}
	return 1;
}


