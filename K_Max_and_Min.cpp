#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[20];
    int age;
    int cls;
    char sec;

};

int main(){

    student shorif;
    shorif.age=23;
    shorif.cls=9;
    shorif.sec='B';
    char nm[20] ="Shorif Ahmad";
    strcpy(shorif.name,nm); 

    cout<<shorif.name<<endl;
    cout<<shorif.age;
    
    return 0;

}