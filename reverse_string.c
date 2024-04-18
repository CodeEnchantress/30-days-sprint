// input a string and reverse it using another string 
#include<stdio.h>
 int main(){
     char s[]= "priyanka";
     char temp;
     int len=0; 
     while(s[len]!='\0'){
        len++;
     }
     printf("the lenght of the string is %d\n",len);
     for (int i =0; i <(len-1)/2; i++){
         temp= s[i];
         s[i]=s[len -1-i];
         s[len-1-i]= temp;
     }
     printf("string now is %s", s);
 }

// we can alse use the strrev function to reverse 