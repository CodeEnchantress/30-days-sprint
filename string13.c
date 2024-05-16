//dlt a string from particukar postion
#include<stdio.h>
#include<string.h>
void dlt (char str[],int n , int m );
int main (){
char str[100];
 int n ,m;
printf("enter the string: ");
gets(str);
printf("enter the postion from where u want to dlt the elements: ");
scanf ("%d", &n);
printf("enter the number of character: ");
 scanf ("%d", &m);
 dlt(str, n, m);
 printf("new string : ");
 puts(str);
}
 void dlt (char str[],int n , int m ){
int a=strlen(str);
for (int i=n;i<=a ; i++ ){
     str[i]= str[i-m];
      for (int i= i+m; i<a; i++){
         str[i]=' ';
         str[a-m]='\0';

      }
}

 }
