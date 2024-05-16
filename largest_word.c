#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    int word_len=0,largest=0;
    printf("enter the string: ");
    gets(str);
    for (int i=0; str[i]!='\0'; i++){
        word_len = 0;
        for (int j=i; str[j]!=' '; j++){
             word_len++;
        }
       if (word_len > largest){
            largest = word_len;
       } 
    }
    printf("%d", largest);
}       