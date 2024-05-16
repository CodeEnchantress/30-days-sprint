// change lower case to upper case and vice versa#
#include<stdio.h>
#include<string.h>
int main (){
     char str[50];
      int i;
    printf("enter the string: ");
    gets(str);
     for ( i=0; str[i]!='\0'; i++){
        if (str[i]>=97&& str[i]<=122){
           str[i]= str[i]-32;

        }
       
         else if (str[i]>=65 && str[i]<=90){
             str[i]= str[i]+32;

         }
    
     }
     
     
     puts(str);
     
 return 0;
}