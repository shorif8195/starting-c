#include<stdio.h>
int main(){
    char ch;
    int a[26]={0};
    while(scanf("%c",&ch)!=EOF){
        a[ch-'a']++;

    }
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            printf("%c : %d\n",i+'a',a[i]);
        }
    }
    int max = 0;
    int ind=0;
    for(int i=0;i<26;i++){
        if(max<a[i]){
            ind = i;
            max = a[i];
        }
    }
    char c = 'a'+ind;
    printf("%c :: %d",c,max);

    return 0;

}