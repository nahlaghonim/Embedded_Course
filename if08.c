#include <stdio.h>
#include <stdlib.h>

int main()
{
     float salary, HRA,DA,gross;
     printf("Enter your salary");
     scanf("%f",&salary);
     if(salary <= 10000)
    {
        HRA= salary * 0.2;
        DA  = salary * 0.8;

    }
    else if(salary <= 20000)
    {
        HRA= salary * 0.25;
        DA= salary * 0.9;
    }
    else
    {
        HRA = salary * 0.3;
        DA  = salary * 0.95;

    }

    gross = salary + HRA + DA;

    printf("Gross salary equals = %f", gross);

    return 0;
}
