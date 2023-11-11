#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",n);
    char a[n+1];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<n;i++){
        int v = a[i]-48;
        sum+=v;
    }
    printf("%d",sum);
    return 0;
}


