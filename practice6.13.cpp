#include<stdio.h>
int main()
{
	unsigned int num;
	scanf("%d",&num);
	int bit7=num&7;
	if(bit7==0)
	printf("the last three bits:000\n");
	if(bit7==1)
	printf("th last three bits:001\n");
	if(bit7==2)
	printf("the last three bits:010\n");
	if(bit7==3)
	printf("the last three bits :011\n");
	if(bit7==4)
	printf("the last three bits :100\n");
	if(bit7==5)
	printf("the last three bits are:101\n");
	if(bit7==6)
	printf("the last three bits:110\n");
	if(bit7==7)
	printf("the last three bits:111\n");
	return 0;
	
}
