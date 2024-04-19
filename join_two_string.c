#include<stdio.h>
#include<string.h>
int main (){
     char a[20],  b[20], c[40];
     int i, j;
     printf("enter the first string\n ");
     gets(a);
     printf("enter the second string\n ");
     gets(b);
     i=j=0;
     while(a[i]!='\0'){

        c[i]=a[i];
        i++;

     }
     while(b[j]!='\0'){

        c[i]=b[j];
        i++,j++;
     }
     c[i]='\0';
     printf("the concatenated string is %s", c);
     return 0;
}