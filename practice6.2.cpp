#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	unsigned int x=rand()%256+0;
	printf("X:%d\n",x);
	if((x&64)==64)
	printf("seventh bit is on\n");
	if((x&64)!=64)
	printf("seventh bit is off\n");
	return 0;
}
