#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],a=0,max=arr[0],b=0;
    for(int i=1 ;i<n;i++){
      
        if(arr[i]>max){
            max=arr[i];
            b=i;
        }
        if(arr[i]<min){
            min=arr[i];
            a=i;
        }
       
    }
    arr[a]=max;arr[b]=min;


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}