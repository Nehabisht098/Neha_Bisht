#include<stdio.h>
int main(){

int n1, n2;
char operators;
 printf("Enter first number: ");
 scanf("%d",&n1);
 printf("Enter an operator: ");
 scanf(" %c",&operators);
 printf("Enter the second number: ");
 scanf("%d",&n2);
switch (operators){
case '+':
printf ("Result: %d\n", n1+n2);
break;
case '-':
printf("Result: %d\n", n1-n2);
break;
case '*':
printf("Result: %d\n", n1*n2);
break;
case '/':
printf("Result: %d\n", n1/n2);
break;
default:
printf("Error: Invalid input\n");
}
    return 0;
}