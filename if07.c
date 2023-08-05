#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,e;
float per;
printf("Enter five marks: ");
scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
per = (a + b + c + d + e) / 5.0;
printf("Percentage is = %f\n", per);
if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

return 0;
}
