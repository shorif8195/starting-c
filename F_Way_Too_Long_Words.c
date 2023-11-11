#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++){
        int value = s[i]-'a';
        count[value]++;
    }
    for(int i=0;i< 26 ;i++){
        int alpha = i+97;
        if(count[i]!=0){
            printf("%c - %d \n",alpha,count[i]);
        }
    }


    return 0;

}