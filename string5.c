// prints whether two strings are same or not 
#include<stdio.h>
#include<string.h>
 void main (){
    char s1[50], s2[50];
    int  len1, len2 , flag =0;
    printf("enter the 1st string: ");
    gets(s1);
    printf("enter the 2nd string:");
    gets(s2);
    len1= strlen(s1);
    len2=strlen(s2);
    if(len1==len2){
        for (int i=0; s1[i]!=s2[i];){
         flag =1;
         break;

         }
         printf("same string");
    }
    else {
        printf("not same");
    }
     
 }