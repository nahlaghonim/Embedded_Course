#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,years,weeks;
    printf("enter days:");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
     printf("years:%d weeks:%d days:%d",years,weeks,days);
    return 0;
}
