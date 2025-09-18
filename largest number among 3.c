#include<stdio.h>
void main()
{
    int a, b,c,d;
    printf("enter three integers:");
    scanf("%d %d %d", &a,&b,&c);
    d= (a>b)?(b>c?a:(a>c?a:c)):(b>c?b:c);
    printf("largest no is %d", d);
}    