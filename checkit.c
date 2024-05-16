#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
     printf("enter the string: ");
     gets (str); 
     int wordlen,largest = 0;
     for (int i=0;str[i]!='\0';i++){
    //     if(str[i] ==' '){
    //         break;
    //     }
    //     else{
    //         wordlen++;
    //     }
    //     if (wordlen > largest){
    //         largest = wordlen;
    //    } 
     }
     printf("%d",largest);
}