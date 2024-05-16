// the num of words in string
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int c;
    printf("enter the string: ");
    gets(str);
    if (str[0] == ' ')
    {
        c = 0 ;
    }

    else
    {
        c = 1 ;
    }
    for (int i =0; str[i]!='\0' ; i++){
         if (str[i]==' '&& str[i+1]!= ' '){
             c++;
                      }
    }
    printf("the num of words in this string are: %d ", c);
}