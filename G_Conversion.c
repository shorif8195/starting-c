#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    // int sol[strlen(s)];
    scanf("%s",&s);
    // for(int i=0;i<strlen(s);i++){
    //     if('A'<=s[i]<='Z'){
    //       s[i]=  s[i]+32;
    //     //   sol[i]=res;
    //     }
    //     else if('a'<=s[i]<='z'){
    //        s[i]=  s[i]-32;
    //     //   sol[i]=res;
    //     }
    //     if(s[i]==','){
    //          s[i]=' ';
    //     }
    // }
    // printf("%s",s);
    // for(int i=0;i<strlen(s);i++){
    //     printf("%c",sol[i]);
    // }

    for(int i=0;i<strlen(s);i++){
        int r = s[0]+32;
        printf("%c",r);
    }
    return 0;
}