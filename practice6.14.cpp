#include<stdio.h>
int main()
{
	unsigned int x;
	printf("enter the number:\n");
	scanf("%d",&x);
	int bit15=x&15;
	if(bit15>7)
	printf("last four bits have bit 4 on\n");
	else 
	printf("last four bits have bit 4 off\n");
	return 0;
}
