#include<stdio.h>

int main()
{
int *arr[4];
int i=31, k=21, j=41, l=51;
arr[0]=&i;
arr[1]=&j;
arr[2]=&k;
arr[3]=&l;

for(int m=0;m<=3;m++)
{
    printf("%d\n",*arr[m]);
}
}
