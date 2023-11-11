#include<stdio.h>
#include<math.h>

int main(){
    int x=9;
    int *p = &x;
    int *a;
    a=p;
    printf("%p\n",&*p);
    printf("%d\n",&x);

    printf("%d\n",&*a);
    printf("%p",p);
 
    
    return 0;
}