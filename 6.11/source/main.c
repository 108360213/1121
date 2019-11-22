#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tmp,k=0;
	int a[9];
	char s;
	printf("Enter nine numbers:");
	while (scanf_s("%d%c", &a[k],&s)!=-1&&s!='\n')
	{
		k++;
	}
		
	for (int i = 8; i >=0; i--)
	{
		for (int j = 0; j<i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}