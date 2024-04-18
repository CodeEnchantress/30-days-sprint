// input a string , print it , calc the length , copy it into another string 
#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100]; 
    char copied_string[100];
    int length;

   
    printf("Enter a string: ");
    scanf("%s", input_string);

    
    printf("Entered string: %s\n", input_string);

    
    length = strlen(input_string);
    printf("Length of the string: %d\n", length);

    
    strcpy(copied_string, input_string);
    printf("Copied string: %s\n", copied_string);

    return 0;
}
