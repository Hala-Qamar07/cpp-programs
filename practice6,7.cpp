#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	char x;
	printf("enter the capital letter:");
	scanf("%c",&x);
	int y=(x+32);
	printf("%c\n",y);
	return 0;	
}
