#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
   vector <int>v={3,4,5,6};
   vector <int> v2(n);
   cout<<"Enter elements for v2: ";
   for(int i=0;i<n;i++){
        cin>>v2[i];
   }
   v.insert(v.begin()+2,v2.begin(),v2.end());

   for(int x:v){
        cout<<x<<" ";
   }
    return 0;
}