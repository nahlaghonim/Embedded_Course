#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Enter length in cm:");
    scanf("%f",&x);
    y=x/100.0;
    z=x/100000.0;
    printf( "length in meters is:%f\n",y);
    printf("length in Km:%f\n",z);


    return 0;
}
