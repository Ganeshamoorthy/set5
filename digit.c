#include <stdio.h>
int main(void) 
{
	int k,temp,a,b,c,d;
	scanf("%d",&k);
	temp=k;
	if(temp!=2)
	{
		a=temp/100;
		b=temp%100;
		c=b/10;
		d=b%10;
	}
	printf("%d %d %d",a,c,d);
	
	return 0;
}
