// insert a substring into the orignal string at particular index
#include<stdio.h>
#include<string.h>
void add (char [], char[], int) ;
 void main  (){
     char str [100], atr[100];
     int n ;
     printf("enter the 1st string");
     gets(str);
     printf("enter the 2nd string");
     gets(atr);
     printf("enter the postion ");
     scanf ("%d", &n);
     add(str, atr, n );
     printf("new string");
     puts (str);
       }
       void add (char str [], char atr[ ], int n ){
         int i , a =strlen(str), b= strlen(atr);
         for (i=a+b; i>=a; i--){
            str[i]= str[i-b];
            str[a+b]='\0';

         }
         for (i=0; i<b; i++){
             str[i+n]=atr[i];
         }
       }