#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   std:: cin>>n;
    vector <int>a(n);
    for(int i=0;i<n;i++){
      std:: cin>>a[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
          if(a[i]+1==a[j]){
            count++;
          }
        }
    }
   std:: cout<<count;
    
    return 0;
}