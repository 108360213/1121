#include<stdio.h>
#include<stdlib.h>

int add(int &xref);

int main(void)
{
	int x = 100;
	int y = add(x);
	printf("x=%d\n", x);
	system("pause");
}
int add(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}