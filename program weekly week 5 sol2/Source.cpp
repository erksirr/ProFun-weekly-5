#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x + i - 1; j++)
		{
			if (j > x - i)printf("*");
			else printf(" ");
			
		}
		printf("\n");
	}
	
}