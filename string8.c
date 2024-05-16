// cal the length of the string
#include<stdio.h>
#include<string.h>
int main (){
     char str[50];
     int len=0;
     printf("enter the string: ");
     gets(str);
     for (int i=0; str[i]!='\0'; i++){
       if (str[i]==' '|| str[i]!= ' '){
         len++;
       }
     }
      printf("the  length of this string is %d", len);
      return 0;
}