#include <stdio.h>
#include <stdlib.h>
#define Bits sizeof(int)*8
int main()
{
     int num, msb;

    printf("Enter the number: ");
    scanf("%d", &num);

    msb = 1 << (Bits - 1);

    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);
    return 0;
}
