#include<stdio.h>
int main()
{
	char x;
	printf("enter the uppercase letter:\n");
	scanf("%c",&x);
	printf("ASCII:%d\n",x);
	if((x&32)!=0)
	printf("bit 32 is on");
	else
	printf("bit 32 is off");

	return 0;
	
}
