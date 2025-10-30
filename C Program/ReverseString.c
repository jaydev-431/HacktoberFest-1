#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);
// Reversing Strings usingng strrev function.
   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
