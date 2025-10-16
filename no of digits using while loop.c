#include<stdio.h>
int main()
{
    int n=0, cnt=0;
    printf("enter no:");
    scanf("%d",&n);
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    printf("\n output=%d",cnt);
}
