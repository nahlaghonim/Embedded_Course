#include <stdio.h>
#include <stdlib.h>

int main()
{
float num1,num2,result;
char op;
printf("Enter the first number:");
scanf("%f",&num1);
printf("Enter the operation:");
scanf("%c",&op);
printf("Enter the second number:");
scanf("%f",&num2);



 switch(op)
    {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break;

        default:
        printf("Invalid");
        break;
    }

    printf("%f", result);



    return 0;
}
