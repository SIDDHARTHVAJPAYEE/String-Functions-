#include<stdio.h>
int main()
{
char x[20];
int count,y;
printf("Enter a string: ");
scanf("%s",x);
count=0;
while(x[count]!='\0')
{
count++;
}
printf("%d",count);
return 0;
}