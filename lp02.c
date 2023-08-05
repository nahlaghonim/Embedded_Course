#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, end;

    printf("Print odd numbers to: ");
    scanf("%d", &end);
   printf("Odd numbers from 1 to %d are: \n", end);
    for(i=1; i<=end; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }    return 0;
}
