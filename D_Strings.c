#include<stdio.h>
#include<string.h>
int main(){
    char a[11];
    char b[11];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%d %d\n",strlen(a),strlen(a));
    int len = strlen(a)+strlen(b);
    char c[len];
    for(int i=0;i<strlen(a);i++ ){
        c[i]=a[i];

    }
    int lenofa=strlen(a);
    for(int i=lenofa;i<len;i++ ){
        for(int j=0;j<strlen(b);j++){
            c[i]=b[j];
        }

    }

    printf("%s\n",c);

    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);
    return 0;

}