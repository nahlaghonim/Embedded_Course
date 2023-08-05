#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    printf("Enter the start: ");
    scanf("%d", &j);
    printf("Enter the end: ");
    scanf("%d", &k);
    for(i=j; i>=k; i--)
    {
        printf("%d\n", i);
    }

       return 0;
}
