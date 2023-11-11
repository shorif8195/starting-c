#include<stdio.h>


int count_before_zero(int *ar,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            break;
        }
        else{
            count++;
        }
    }
    return count;

}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res  = count_before_zero(a,n);
    printf("%d",res);
    return 0;
}