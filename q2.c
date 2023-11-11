#include<stdio.h>
int stack[100],n,choice=0,top=-1;
void push();
void pop();
void show();
int main(){
    printf("Enter the number of elements in the stack: ");
    scanf("%d",&n);

    while(choice!=4){
        printf("1.Push:\n2.pop:\n3.show\n4.Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                    break;
            case 2:pop();
                   break;
            case 3:show();
                    break;
            case 4:printf("Exit");
                    break;
        };
    }
  
    return 0;

}
void push(){
    int value;
    if(top==n){
        printf("Overflaw");
    }
    else{
        printf("Enter a value: ");
        scanf("%d",&value);
        top+=1;
        stack[top]=value;
    }
}
void pop(){
    if(top==-1){
        printf("Underflaw");
    }
    else{
        top-=1;
    }
}

void show(){
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    if(top==-1){
        printf("stack is empty");
    }
}