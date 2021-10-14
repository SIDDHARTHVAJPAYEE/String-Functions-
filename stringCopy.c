#include<stdio.h>
int main()
{
char x[20],y[20];
int e;
printf("Enter a string : ");
scanf("%s",x);
e=0;
while(x[e]!='\0')
{
y[e]=x[e];
e++;
}
y[e]='\0';
printf("%s",y);
return 0;
}