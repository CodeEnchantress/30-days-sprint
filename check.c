#include<stdio.h>
#include<string.h>

void main () {
    char str[200];
    int vowels = 0, consonants = 0, special_char = 0, i;
    printf("Enter the string: \n");
    gets(str);
    int n = strlen(str);

    for (i = 0; i < n; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            special_char++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of special characters: %d\n", special_char);
}
