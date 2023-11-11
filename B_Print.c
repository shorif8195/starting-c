#include<stdio.h>
void func(int *ar,int x){
    int max=0,min=0;
    
    for(int i=0;i<x;i++){
        if(max<ar[i]){
            max=ar[i];
        }
        if(min>ar[i]){
            min=ar[i];
        }
    }
    pintf("%d %d\n",min,max);
}
int main(){
    int x;
    scanf("%d",&x);
    int ar[x];
    for(int i=0;i<x;i++){
        scanf("%d",&ar[i]);
    }
    func(ar,x);
    return 0;
}
