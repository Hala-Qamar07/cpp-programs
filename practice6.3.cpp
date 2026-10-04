#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	int result=(num&7);
	printf("last three bits:%d\n",result);
	return 0;
}
