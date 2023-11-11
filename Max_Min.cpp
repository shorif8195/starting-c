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


void insert_at_tail (node *&head,int v){
    node *newNode = new node(v);
   if(head ==NULL){
        head= newNode;
        return;
   }

   newNode->next = head;
   head = newNode;
   
   
}
void min_value(node *head){
    node *temp = head;
    int m = INT_MAX;
   while(temp!=NULL){
     if(temp->val<m){
        m=temp->val;
        temp=temp->next;
        continue;
    
    }
     temp=temp->next;
   }
   cout<<m;
}
void max_val(node *head){
    int mx = INT_MIN;
    while(head!=NULL){
        if(head->val>mx){
            mx=head->val;
            head = head->next;
            continue;
        }
        head=head->next;
    }
    cout<<mx<<" ";
}
int main(){
   node *head = NULL;
   
   
   while(true){
            int v;
            cin>>v;
            if(v==-1)break;
        
            insert_at_tail(head,v);
            
        
   } 
   max_val(head);
   min_value(head);
    return 0;
}