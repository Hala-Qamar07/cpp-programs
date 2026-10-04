#include<stdio.h>
int main()
{
	unsigned int x;
	printf("enter the integar:");
	scanf("%d",&x);
	int y=x&12;
	printf(" selected bits value:%d\n",y);
	return 0;
}

