#include<stdio.h>
#include<string.h>
int main (){
      char str[50];
      int i, len , temp;
      printf("enter the string: ");
      gets(str);
      printf("the entered string is: ");
      puts(str);
      len =strlen(str);
      for (i=0; i<len/2; i++){
         temp =str[i];
         str[i]=str[len-1-i];
         str[len-1-i]=temp;


      }
      printf("the reversed string is : ");
      puts(str);
      
       return 0;
       
}