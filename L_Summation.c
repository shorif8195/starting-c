#include<stdio.h>
int fun(int ar[],int x,int i){
    int count=0;
    if(i>=x){
        return 0;
    }
    count+=ar[i];
    fun(ar,x,i+1);
     return count;



}

int main(){
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int res= fun(a,x,0);
    printf("%d",res);
}