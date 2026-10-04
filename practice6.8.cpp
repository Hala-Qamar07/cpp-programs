#include<stdio.h>
int main()
{
	char x;
	printf("enter the lowercase character:");
	scanf("%C",&x);
	int sum=x&223;
	printf("%c:%d",sum,sum);
	return 0;
}
