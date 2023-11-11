#include<bits/stdc++.h>
using namespace std;
class node{
    public:
     int val;
     node*left;
     node* right;
     node(int v){
        this->val=v;
        this->left=NULL;
        this->right=NULL;
     }


};
node* input_tree(){
    int v;cin>>v;
    node *root;
    if(v==-1)root = NULL;
    else root = new node(v);
    queue<node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        node * n = q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        node *myleft;
        node *myright;

        if(x==-1)myleft=NULL;
        else myleft = new node (x);

        if(y==-1)myright = NULL;
        else myright = new node (y);

        n->left=myleft;
        n->right=myright;

        if(n->left)q.push(n->left);
        if(n->right)q.push(n->right);


    }
    return root;


}
void indexcheck(node*root ,vector<int>&v,int x){
    if(root==NULL)return ;
    queue<pair<int,node*>>q;
    q.push({0,root});
    while(!q.empty()){
        pair<int,node*>p = q.front();
        q.pop();

        int level = p.first;
        node* n = p.second;
        if( level==x){
            v.push_back(n->val);
        }
        
        if(n->left)q.push({level+1,n->left});

        if(n->right)q.push({level+1,n->right});


    }
}
int main(){
    node *root = input_tree();
    int x;cin>>x;
    vector<int>v;
    indexcheck(root,v,x);
    if(v.empty()){
        cout<<"Invalid\n";
    }
    else{
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }

   
    
    return 0;
}