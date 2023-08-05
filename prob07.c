#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int base,exp,res;
    printf("Enter base:\n");
    scanf("%d",&base);
    printf("Enter exp:\n");
    scanf("%d",&exp);
    res=pow (base,exp);
    printf("Result:%d\n",res);


    return 0;
}
