#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,f,total;
    float avarege,percentage;
    printf("Enter subj1 mark");
    scanf("%d",&a);
    printf("Enter subj1 mark");
    scanf("%d",&b);
    printf("Enter subj1 mark");
    scanf("%d",&c);
    printf("Enter subj1 mark");
    scanf("%d",&d);
    printf("Enter subj1 mark");
    scanf("%d",&f);
    total=a+b+c+d+f;
    avarege=total/5;
    percentage=(total/500.0)*100;
    printf("The total is:%d\n The avarage is %f \n The percentage is:%f",total,avarege,percentage);
    return 0;
}
