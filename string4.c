#include<stdio.h>
 #include<string.h>
 void main(){
     char a[50], b[20] ;
     int i , len ;
     printf ("enter the 1st string: ");
     gets(a);
     printf("enter the 2nd string: ");
     gets(b);
      len =strlen(a);

       a [len]= 'x';
       
       len++;
       puts(a);

       for (i=0; b[i]!='\0';i++ ){
         a[i+len]=b[i];
       }
       a[i+len]= '\0';
       puts(a);
 }
 // function to concatenate two string strcat(b, a);;