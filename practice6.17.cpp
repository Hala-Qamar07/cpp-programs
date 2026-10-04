#include<stdio.h>
int main()
{
	unsigned int x,y;
	printf("enter the two unsigned integar:\n");
	scanf("%d %d",&x,&y);
	int end=x&y;
	printf("AND:%d\n",end);
	if((end&1)!=0)
	printf("first bit is on\n");
	if((end&2)!=0)
	printf("second bit is on\n");
	if((end&4)!=0)
	printf("third bit is on\n");
	if((end&8)!=0)
	printf("fourth bit is on\n");
	return 0;
	
}
