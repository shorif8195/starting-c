#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int>adj[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    cout<<u<<endl;
    for(int v:adj[u]){
        if(visited[v])continue;
        dfs(v);

    }

}
int main(){
   int n,m;
   cin>>n>>m; 
   for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
   }

//    for(int i=1;i<=n;i++){
//         cout<<"list "<<i<<": ";
//         for(auto j:adj[i]){
//             cout<<"("<<j.first<<","<<j.second<<"),";
//         }
//         cout<<endl;
//    }
dfs(1);

for(int i=1;i<=n;i++){
    cout<<visited[i]<<" ";
}
    return 0;
}