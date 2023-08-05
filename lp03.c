#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, end, sum=0;

    printf("Enter the end: ");
    scanf("%d", &end);
    for(i=1; i<=end; i++)
    {
        sum += i;
    }

    printf("Sum of 0 to %d is = %d",end, sum);
    return 0;
}
