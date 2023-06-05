#include<stdio.h>
#include<conio.h>
main()
{
int i, j, rows;
printf("Enter no. of rows= ");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for(j=i;j<rows;j++)
{
    printf("    ");
}
for(j=i;j<=(2*i-1);j++)
{
    if(i<3)
{
    printf("%d",2*j);
}
else if(i==3)
{
printf("%d",2*j+2);
}
else if(i==4)
{
printf("%d",2*j+6);
}
}
printf("\n");
}
getch();
}
