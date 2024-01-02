#include<stdio.h>
int main (void)
{
    char let;
    scanf("%c",&let);
    if(let=='a'||let=='A'||let=='e'||let=='E'||let=='i'||let=='I'||let=='o'||let=='O'||let=='u'||let=='U')
    printf("Taken Alphabet is a vowel\n");
    else
    return 0 ;
}