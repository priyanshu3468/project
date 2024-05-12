#include<stdio.h>
int main()
{
int sum,subtract,multiplication,a,b;
char op;
scanf("%d",&a);
scanf("%c",&op);
scanf("%d",&b);

switch (op)
{
case '+':
sum = a+b;
printf("The sum is%d",sum);
    break;
   case '-':
    subtract = a-b;
    printf("The subtract is%d",subtract);
break;
case '*':
multiplication = a*b;
printf("The multiplication is%d",multiplication);
break;}
return 0;
}

default:
    break;
}


}
