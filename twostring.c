#include<stdio.h>
#include<conio.h>
void main()
{
char g1[100],g2[100];
int res;
clrscr();
printf("Enter g1 and g2:");
gets(g1);
gets(g2);
res=strcmp(g1,g2);
if(res==0)
printf("Strings are equal");
else
printf("Strings are not equal");
getch();
}
int strcmp(char *g1,char *g2)
{
int i=0;
while(g1[i]!='\0'||g2[i]!='\0')
{
if(g1[i]!=g2[i])
return (g2[i]-g1[i]);
i++;
}
return 0;
}

