#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<pair<int,int>>adj[N];
int main(){
   int n;cin>>n;
   int m;cin>>m;
   for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[u].push_back({w,v});
   } 
  
  for(int i=1;i<=n;i++){
    cout<<"List "<<i<<": ";
    for(auto j:adj[i]){
        cout<<"("<<j.first<<","<<j.second<<"),";
    }
    cout<<endl;

  }
    return 0;
}