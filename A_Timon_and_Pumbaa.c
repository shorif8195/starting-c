#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = a-b;
    if(res>=0){
        printf("%d\n",res);
    }
    else{
        printf("0");
    }
}