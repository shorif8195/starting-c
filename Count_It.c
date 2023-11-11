#include<stdio.h>
int main(){
    char s[1001];
    fgets(s,sizeof(s),stdin);

    int cap=0,sm=0,sp=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            cap++;
        }
         if(s[i]>='a' && s[i]<='z'){
            sm++;
        }
        if(s[i]==' '){
            sp++;
        }
        i++;
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d",cap,sm,sp);
    return 0;

}