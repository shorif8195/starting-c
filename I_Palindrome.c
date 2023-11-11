#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int is_palindrome(char *s,int l){
    
     int a=0;
    int b=l-1;
    int fleg=0;
    while(a<=b){
        if(s[a]!=s[b]){
           fleg++;
        }
        
        a++;
        b--;
    }
    return fleg;
}

int main(){
    char s[1001];
    scanf("%s",&s);

    int res =is_palindrome(s,strlen(s));
  
    if(res==0){
        printf("YES Palindrome");
    }
    else{
        printf("NO Palindrome");
    }
   
    return 0;
}