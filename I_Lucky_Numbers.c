#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int div = n/10;
    int rel = n%10;
    if(div%rel==0){
        printf("YES\n");
    }
    else if(rel%div==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}