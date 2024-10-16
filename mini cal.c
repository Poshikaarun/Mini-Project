#include<stdio.h>
int main()
{
int a,b,result;
char operator;
printf("Enter the operator \n");
scanf("%c",&operator);
printf("Enter the 2 numbers");
scanf("%d %d",&a,&b);
switch(operator)
{

    case '+':
        result=a+b;
        printf("The sum of a and b is:%d\n",result);
        break;
    case '-':
        result=a-b;
        printf("The difference of a and b is:%d\n",result);
        break;
    case '*':
        result=a*b;
        printf("The product of a and b is:%d\n",result);
        break;
    case '/':
        result=a/b;
        printf("The quotient of a and b is:%d\n",result);
        break;
    case '%':
        result=a%b;
        printf("The remainder of a and b is:%d\n",result);
        break;
    case '^':
        result=pow(a,b);
        printf("The power of a and b is:%d\n",result);
        break;
      case 'sqrt':
        result=sqrt(a);
        printf("The square root  of a  is:%d\n",result);
        break;

    default:
            printf("invalid input");
}
   return 0;
}
