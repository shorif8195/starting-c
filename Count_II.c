#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    char arr[1001];
    scanf("%s",arr);
    int count=0;
    for(int i=0;i<1001;i++){
        if(arr[i]=='\0'){
            break;
        }
        if((arr[i]=='a')|| (arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}