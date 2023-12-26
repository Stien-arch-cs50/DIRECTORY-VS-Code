#include<stdio.h>
int main ()
{
    float i,j,sum,sub,multi,div;
    scanf("%f %f",&i,&j);
    sum = i+j; sub = i-j; div = i/j; multi=i*j;
    printf("Addition =%.2f,Subtraction =%.2f, Division =%.2f, Product =%.2f",sum,sub,div,multi);
}