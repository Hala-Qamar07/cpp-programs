#include<stdio.h>
int main()
{
	int x;
	printf("enter the integar:");
	scanf("%d",&x);
	int y=x&3;
	if(y==0)
	printf("last two bits are 00\n");
	else if(y==1)
	printf("last two bits are 01\n");
	else if(y==2)
	printf("last two bits are 10\n");
	else
	printf("last two bits are 11\n");
	return 0; 
}
