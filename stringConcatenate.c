#include<stdio.h>
int main()
{
char x[40],y[20];
int e,f;
printf("Enter a string :");
scanf("%s",x);
printf("Enter another string :");
scanf("%s",y);
e=0;
while(x[e]!='\0')
{
e++;
}
f=0;
while(y[f]!='\0')
{
x[e]=y[f];
f++;
e++;
}
x[e]='\0';
printf("%s",x);
return 0;
}