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

void level(node *root,vector<int>&v){
    if(root==NULL)return ;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* p = q.front();
        q.pop();

        v.push_back(p->val);
        if(p->right)q.push(p->right);
        if(p->left)q.push(p->left);
    }
}
int main(){
    node *root = input_tree();
    vector<int>v;
    level(root,v);
    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

   
    
    return 0;
}