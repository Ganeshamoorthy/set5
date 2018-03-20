#include <stdio.h>
int main(void) 
{
	int number,temp,sum=0;
	printf("enter the number");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		temp=number%10;
		sum=sum+temp;
		number=number/10;
 
	}
	printf("\n%d",sum);
	return 0;
}
