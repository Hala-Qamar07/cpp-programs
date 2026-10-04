#include<stdio.h>
int main()
{
	unsigned int num;
	scanf("%d",&num);
	int bit4=num&4;
	int bit32=num&32;
	if(bit4!=0 && bit32!=0)
	printf("both selected bits are on\n");
	if(bit4==0 && bit32==0)
	printf("both selectes bits are not on\n");
	return 0;
	
}
