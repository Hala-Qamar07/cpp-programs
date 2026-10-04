#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
	srand(time(0));
	unsigned int x;
	scanf("%d",&x);
	int bit8=x&8;
	int bit16=x&16;
	if(bit8==0 && bit16==0)
	printf("bits are both off\n");
	if(bit8!=0 && bit16!=0)
	printf("both bits are on\n");
	if((bit8!=0 && bit16==0)||(bit8==0 && bit16!=0))
	printf("one bit is on and the other is off\n");
	return 0;
}
