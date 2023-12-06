#include<stdio.h>
#include<Math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float X1=(-b/2*a)+(sqrt(b*b-4*a*c)/2*a);
    printf("Root1=%f",X1);
}