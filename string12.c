// find the largest word in the string

#include<stdio.h>
#include<string.h>
int main (){
     int n , i,current_word_length=0, maxlength=0 ;
  char str[100];
  printf("enter the string: ");
  gets(str);
  n= strlen(str);
  while (str[i]!='\0'){
    if (str[i]!= ' '){
         current_word_length++;
    }
  }
  for (int i=0; str[i]!='\0'; i++){
     if ( current_word_length >  maxlength){
         maxlength= current_word_length;
     }
  }
   printf("the largest words is %sc",maxlength);



    return 0;

}