#include<stdio.h>
int main()
{
int i,s,t;
scanf("%d",&s);
for(i=7;i>=0;i--)
{
t=((1<<i)&s);
if(t==0)
printf("0");
else
printf("1");
}
return 0;
}



