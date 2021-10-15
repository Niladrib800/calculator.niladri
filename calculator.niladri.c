#include<stdio.h>
int main()
{
char operator;
double n,m;
printf("enter the operator(+,-,*,/) : ");
scanf("%c",&operator);
printf("enter the two numbers one by one:");
scanf("%lf %lf",&n,&m);
switch(operator)
{
case '+' :
    printf("%lf + %lf = %lf",n,m,(n+m));
    break;
case '-' :
    printf("%lf - %lf = %lf",n,m,(n-m));
    break;
case '*' :
    printf("%lf * %lf = %lf",n,m,(n*m));
    break;
case '/' :
    printf("%lf / %lf = %lf",n,m,(n/m));
    break;
default:
    break;
}
return 0;
}
