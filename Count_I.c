#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,e=0,o=0;
    scanf("%d",&x);
   int arr[1001];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d %d",e,o);
    
    return 0;
}
