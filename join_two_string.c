#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[20];
    int len;
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    len = strlen(str1);
    if (str1[len - 1] == '\n')
        str1[len - 1] = '\0'; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    len = strlen(str2);
    if (str2[len - 1] == '\n')
        str2[len - 1] = '\0'; 
    
    strcat(str1, " "); 
    strcat(str1, str2); 
    
    printf("Concatenated string: %s\n", str1);

    return 0;
}
