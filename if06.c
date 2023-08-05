#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second,third;

    printf("Enter the first side");
    scanf("%d",&first);
    printf("Enter the second side");
    scanf("%d",&second);
    printf("Enter the third side");
    scanf("%d",&third);
    if (first==second && second==third)
        printf("it's equilateral");
        else if ((first==second && first==third) || (second==third && second==first) || (third==first && second==third))
    {
     printf("it's Isosceles");
    }
      else {
        printf("it's Scalene");
      }


    return 0;
}
