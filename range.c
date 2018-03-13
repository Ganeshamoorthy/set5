#include <stdio.h>

int main(void) 
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n>=1 && n<=10)
	{
		printf("\n correct");
	}
	else
	{
		printf("\n not correct");
	}
	return 0;
}
