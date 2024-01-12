#include<stdio.h>
#include<Math.h>
int main()
{
    float a,b,c,d=b*b-4*a*c;
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        float X1=(-b/2*a)+(sqrt(d)/2*a);
        float X2=(-b/2*a)-(sqrt(d)/2*a);
        printf("Root1=%.3f Root2=%.3f ,are real and equal",X1,X2);
    }
    else if(d<0)
    {
        float X1=(-b/2*a)+(sqrt(d)/2*a);
        float X2=(-b/2*a)-(sqrt(d)/2*a);
        printf("Root1=%.3f Root2=%.3f ,are imaginary");
    }
    else
    printf("Roots are equal.\n");
}