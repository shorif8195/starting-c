#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("%d",j);

        }
        printf("\n");
    }
    int k=n*2-1;

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int  j=1;j<=k-2;j++){
            printf("%d",j);
        }
        k-=2;
        printf("\n");

    }

    return 0;
}