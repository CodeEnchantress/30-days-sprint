#include<stdio.h>
 #include<string.h>
 int main (){
    char str1[50],str2[50];
    printf("enter the string: ");
    gets(str1);
   
   strcpy(str2, str1);
   strrev(str2);
    if (strcmpi(str1, str2)==0){
         printf("\n it is a palindrom  ");
             }
              else {
                 printf("\n it is not an palindrom");
              }
 }