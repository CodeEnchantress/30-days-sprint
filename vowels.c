// number of words starting with a vowel
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], c;
    printf("Enter the string: ");
    gets(str);
    int n = strlen(str);
    int i, k = 0;

    if (str[0] != ' ')
    {
        c = str[0];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            k++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            c = str[i + 1];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                k++;
            }
        }
    }

    printf("Number of words that start with a vowel: %d\n", k);

    return 0;
}
