#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter the character:")  ;
scanf("%c",&character);
if ((character>= 'a'& character<='z')||(character>='A'& character<='Z'))
    printf("Character is alphabet");
else
        printf("Character is not an alphabet");

    return 0;
}
