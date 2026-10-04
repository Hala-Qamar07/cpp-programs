#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	unsigned int x=rand()%256+0;
	printf("X:%d\n",x);
	if((x&16)==16)
	printf("Bit 5 is on\n");
	if((x&16)!=16)
	printf("bit 5 is off\n");
	return 0;
}
