#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter the first angle");
    scanf("%d",&x);
    printf("Enter the second angle");
    scanf("%d",&y);
    printf("Enter the third angle");
    scanf("%d",&z);
    if (x+y+z==180&&x>0&&y>0&&z>0)
        printf("it's valid");
    else
        printf("it's not valid");
    return 0;
}
