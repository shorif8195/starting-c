#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // int n[a];
    int m[100002]={0};
    for(int i=0;i<a;i++){
        int x;
        scanf("%d",&x);
        m[x]++;
    }
    // for(int i=0;i<a;i++){
    //     m[n[i]]++;
    // }
    for(int i=1;i<=b;i++){
        printf("%d\n",m[i]);
    }
    return 0;
}