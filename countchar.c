#include<stdio.h>
#include<string.h>
int main(){

    char* str="abczypp";

    int n=strlen(str);

    int arr[26];
    for (int i=0;i<26;i++){
        arr[i]=0;
    }
    int asciiOfa=(int)'a';

    for (int i=0;i<n;i++){
        int ascii=(int)(str[i]);

        int index=ascii- asciiOfa;

        arr[index]++;

    }

    for(int i=0;i<26;i++){
        char c=(char)(i+asciiOfa);
        printf("%c:",c);
        printf("%d ",arr[i]);
    }
    return 0;
}
 