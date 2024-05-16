#include<stdio.h>
#include<string.h>
int main (){
     char str[100];
     printf("enter the string: ");
     gets (str);
     if (str[0]!=' '){
         printf("%c", str[0]); 
     }
     for (int i=0; str[i]!= '\0'; i++){
        if (str[i]==' ' &&str[i+1]!=' '){
             printf("%c", str[i+1]);
        } 
     }
     return 0;
}