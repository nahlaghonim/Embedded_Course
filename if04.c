#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter the month:");
    scanf("%d",&month);
    if ((month == 1) || (month== 3 )|| (month== 5 )|| (month== 7) || (month== 8) || (month== 10) || (month== 12))
   {
     printf("It contains 31 days");
   }
    else if ((month== 4 )|| (month== 6 )|| (month== 9) || (month== 11))
{
    printf("It contains 30 days");

}
    else {
    printf("It contains 28 days");
}
    return 0;
}
