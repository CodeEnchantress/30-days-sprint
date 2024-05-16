// input a string and count the number of vowels, consonents, special char
#include <stdio.h>
#include <string.h>
void main()

{
    char str[200];
    int vowels = 0, consonents = 0, special_char = 0, i;
    printf("enter the string: \n");
    gets(str);
    int n = strlen(str);
    // int ascii= (int)str[i];
    for (i = 0; i < n; i++)
    {
        // 97 <= (int)str[i] <= 122 || 65 <= (int)str[i] <= 90   this is wrong
        int ascii=(int)str[i];

        if ( (ascii>=97 && ascii<=122)   || (ascii>=65 && ascii<=90))
        {
            char c = (char)str[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                vowels++;
            }
            else
            {
                consonents++;
            }
        }
        else
        {
            special_char++;
        }
    }


    printf("vovels: %d, consonants= %d , others=%d", vowels,consonents,special_char);
}
