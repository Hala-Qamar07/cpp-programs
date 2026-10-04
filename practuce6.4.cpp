#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char x;
	printf("enter the upper case character:");
	scanf("%c",&x);
	printf("uppercase:%c,%d\n",x,x);
	int sum=x+32;
	printf("lowercase ASCII:%d\n",sum);
	return 0;
}
