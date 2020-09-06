#include<stdio.h>
#include<conio.h>
int quadrant(int, int);

int main()
{
	int coordinate[5];
	printf("input your point\nex.\n1\n2\n-----\n");
	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &coordinate[i]);
	}

	if (quadrant(coordinate[0],coordinate[1]) != 5)
	{
		printf("(%d,%d) is in Quadrant %d ", coordinate[0], coordinate[1], quadrant(coordinate[0], coordinate[1]));
	}
	else { printf("(%d,%d) is a Origin point ", coordinate[0], coordinate[1]); }

	return 0;
}

int quadrant(int x, int y)
{
	if (x>0 && y>0)
	{
		return 1;
	}
	else if (x<0 && y>0)
	{
		return 2;
	}
	else if (x<0 && y<0)
	{
		return 3;
	}
	else if (x>0 && y<0)
	{
		return 4;
	}
	else { return 5; }
}
