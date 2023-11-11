#include<bits/stdc++.h>
using namespace std;
class student{
        public:
        string nm;
        int cls;
        char s;
        int id;
        
};
int main(){
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++){
    cin>>a[i].nm;
    cin>>a[i].cls;
    cin>>a[i].s;
    cin>>a[i].id;
    }

    int x=0,y=n-1;
    while(x<y){
        swap(a[x].id,a[y].id);
        x++;y--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
   

    return 0;
}