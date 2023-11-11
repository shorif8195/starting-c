#include<stdio.h>
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int count=0;

    // if(a/b==2 &&  c/b==2){
    //     count+=b;
    //     b=0;
    //     a-=b;
    //     c-=b;
    // }
    while(a>=1 && b>=1 && c>=1){
        count++;
        a--;
        b--;
        c--;
    }
    if(a/c==2){
        count+=c;
        a-=2*c;
        c-=c;
   }
   
    while(a>=2 && c>=1){
        count++;
        a-=2;
        c--;
    }
   
    printf("%lld",count);
    return 0;
}