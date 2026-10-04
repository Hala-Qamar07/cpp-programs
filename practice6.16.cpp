#include<stdio.h>
int main()
{
	char x;
	printf("enter the lowecase letter:\n");
	scanf("%c",&x);
	printf("ASCII:%d\n",x);
	if((x&32)!=0)
	printf("bit 32 is on\n");
	if((x&32)==0)
	printf("bit 32 is off\n");
	int differ=x-32;
	printf("uppercase ASCII:%d\n",differ);
	return 0;
}
