#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n, after;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);
    after = (1 << n) | num;
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, after);

    return 0;
}
