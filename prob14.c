#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n, after;
   printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);
    after = num & (~(1 << n));
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, after);
    return 0;
}
