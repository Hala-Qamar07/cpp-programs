#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	printf("lowercase letter:%c ,%d\n",x,x);
	int result=x-32;
	printf("uppercase letter:%c ,%d",result,result);
	return 0;
	
}
