#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	char x;
	printf("enter the lowercase letter:");
	scanf("%c",&x);
	printf("lowercase:%c,%d\n",x,x);
	int differ=x-32;
	printf("uppercase ASCII:%d\n",differ);
	return 0;
}
