#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, flippednumber;
   printf("Enter the number: ");
    scanf("%d", &num);
    flippednumber = ~num;
    printf("Original number is = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)", flippednumber);
    return 0;
}
