#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, exp,i;
    int pow= 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    for(i=1; i<=exp; i++)
    {
        pow = pow * num;
    }

    printf("%d ^ %d = %d", num, exp, pow);
      return 0;
}
