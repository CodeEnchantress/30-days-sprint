#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  int space = 0, words = 0;
  printf("enter the string: ");
  gets(str);
  for (int i = 0; str[i]!='\0'; i++)
  {
    if (str[i]==' ')
      
    {
      space++;
    }
     else if( str[i]!=' ' ){
       words++;
     }
  }

  printf(" the number of spaces in this string are %d", space);
  printf("the number of words in this string are : %d",words);
  return 0;
}