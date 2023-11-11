#include<stdio.h>
int main(){
    int x,p;
    scanf("%d %d ",&x,&p);
    float ans = ((100*p)*1.0)/(100-x);
    printf("%.2f",ans);
}