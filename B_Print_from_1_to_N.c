#include<stdio.h>
void fun(int n){
    if(n==0)return;

    fun(n-1);
    printf("%d\n",n);



}
int main(){
    int x;
    scanf("%d",&x);
    fun(x);
    return 0;
}