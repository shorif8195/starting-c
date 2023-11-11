#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int val;
    node *next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void beginig_insert(node *&head,node *&tail,int v){
   node *newNode = new node(v);
   if(head ==NULL){
        
        head= newNode;
        tail = head;
        cout<<head->val<<" "<<tail->val<<endl;
        return;

   }
   
   newNode->next=head;
   head= newNode;
   cout<<head->val<<" "<<tail->val<<endl;
   
}
void insert_at_tail (node *&head,node *&tail,int v){
    node *newNode = new node(v);
   if(head ==NULL){
        
        head= newNode;
        tail = head;
        cout<<head->val<<" "<<tail->val<<endl;
        return;

   }
   tail->next= newNode;
   tail=tail->next;
   cout<<head->val<<" "<<tail->val<<endl;
}
int main(){
   node *head = NULL;
   node *tail = NULL;
   int q;
   cin>>q;
   while(q--){
        int x,v;
        cin>>x>>v;
        if(x==0){
            beginig_insert(head,tail,v);
            
        }
        else if(x==1){
            insert_at_tail(head,tail,v);
        }
   } 
    return 0;
}