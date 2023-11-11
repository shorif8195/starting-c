#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    scanf("%d",&x);
    int a[x][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int sumpri = 0;
    int sumsec = 0;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i==j){
                sumpri +=a[i][j];
            }
        }
    }
     
    for(int i=0;i<x;i++){
        for(int j=x-1-i;j>=0;j++){
           sumsec += a[i][j];
           break;
        }
    }
    int res = sumpri-sumsec;

    int ans = abs(res);
    printf("%d ",ans);
    return 0;
}