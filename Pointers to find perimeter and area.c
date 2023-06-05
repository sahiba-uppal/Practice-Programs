#include<stdio.h>
void arper(float r,float *p,float *a)
{
*p=2*3.14*r;
*a=3.14*r*r;
}

int main()
{
float rad, peri, area;
printf("Enter the radius: ");
scanf("%f",&rad);
arper(rad,&peri,&area);
printf("Perimeter= %f\n",peri);
printf("Area= %f",area);
return 0;
}

