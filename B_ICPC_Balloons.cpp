#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        char a[x];
        for(int j=0;j<x;j++){
            cin>>a;
        }
        
        int f[26]={0};
        int balloon=0;
       

        for(int j=0;j<x;j++){
            
            int ind = a[i]-'a';
            if(f[ind]==0){
                balloon+=2;
                f[ind]++;
            }
            else{
                balloon+=1;
                f[ind]++;
            }
            

        }
        cout<<balloon<<endl;
         for(int j=0;j<26;j++){
            cout<<f[j]<<" ";
        }
        
   } 
   
    return 0;
}