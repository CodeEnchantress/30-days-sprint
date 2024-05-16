#include<stdio.h>
#include<string.h>
void main (){
     char a[20], b[20];
     int i;
     printf("enter the string : " );
     gets (a);
      
      printf("enter the 2nd string: ");
      gets(b);
     for (i=0; a[i]!='\0'; i++){
        b[i]=a[i];

     } 
     b[i]='\0';
     puts (a);
     puts(b);
}
// function to copy a string : strcpy(b,a); 