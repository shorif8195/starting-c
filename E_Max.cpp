#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int id;
    int age;
    int cls;
    char sec;

    student(int i,int a,int c,char s){
        id=i;
        age=a;
        c=cls;
        sec=s;
    }
};
int main(){
   student rohim(58,22,12,'A');  // an object created
    return 0;
}