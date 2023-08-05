#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
   printf("Enter the character:")  ;
   scanf("%c",&character);

   if (character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
       character=='A' || character=='E' || character=='I' || character=='O' || character=='U')
       printf("%c is vowel",character);
  else if ((character>= 'a'& character<='z')||(character>='A'& character<='Z'))
  {
   printf("%c is constant",character);
  }
    else
    {
    printf("%c is neither constant nor vowel",character);
    }

    return 0;
}
