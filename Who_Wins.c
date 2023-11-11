#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=0,p=0;
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b){
            t++;
        }
        if(b>a){
            p++;
        }
    }

    if(t>p){
        printf("Tiger");
    }
    else if(p>t){
        printf("Pathan");
    }
    else{
        printf("Draw");
    }
    return 0;
}