#include<stdio.h>

int rec(int x)
{
int f;
if (x==1)
    return 1;
else
    f=x*rec(x-1);
return f;
}

int main()
{
int num, fact;
printf("Enter a number: ");
scanf("%d", &num);
fact=rec(num);
printf("Factorial= %d",fact);
}
