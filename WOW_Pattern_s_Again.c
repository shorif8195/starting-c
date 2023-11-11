#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            printf(" ");
        }
        for(int j=0;j<i*2+1;j++){
            if(i%2==0){
                printf("^");

            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}