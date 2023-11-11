#include<bits/stdc++.h>
using namespace std;
class student{
        public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        
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
    cin>>a[i].math_marks>>a[i].eng_marks;

    }

   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int sum1 = a[i].math_marks + a[i].eng_marks;
        int sum2 = a[j].math_marks + a[j].eng_marks;
        if(sum1==sum2){
            if(a[i].id>a[j].id){
                swap(a[i],a[j]);
            }
        }
       else if(sum1<sum2){
            swap(a[i],a[j]);
        }
    }
   }
    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
   

    return 0;
}