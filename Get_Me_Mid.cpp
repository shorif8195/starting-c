#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void inserting(node *&head,int v){
    node *newNode = new node(v);
    node *temp = head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;

}
void sorting(node *&head){
    node *temp= head;
    for(node *i=head;i->next!=NULL;i=i->next){
        for(node *j=i->next;j!=NULL;j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }

    }
}
void printing(node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int size(node *head){
    node *temp = head;
    int count = 0 ;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}
void mid(node *head,int s){
    node *temp = head;
    if(s%2==0){
        int m = s/2;
        for(int i=1;i<m;i++){
            temp = temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<endl;

    }
    else{
        int m = s/2;
        for(int i=1;i<=m;i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }

}
int main(){
    node *head = NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1)break;
        inserting(head,v);
       
    }
     sorting(head);
    // printing(head);
    int s=size(head);
    mid(head,s);
    
    return 0;
}