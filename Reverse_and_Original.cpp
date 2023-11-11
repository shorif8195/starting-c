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
void inserting(node *&head,node *&tail,int v){
    node *newNode = new node(v);
    node *temp = head;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
   tail->next=newNode;
   tail = tail->next;

}
void rev(node *head){
    node *temp = head;
    if(temp == NULL)return;
    
    rev(temp->next);
    if(temp->next==NULL){
        cout<<temp->val;
        return;
    }
    cout<<" "<<temp->val;
}
void printing(node *head){
    if(head== NULL)return;
    cout<<" "<<head->val;
    printing(head->next);
}
int main(){
    node *head = NULL;
    node *tail = NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1)break;
        inserting(head,tail,v);
        


    }
    rev(head);
    cout<<endl;
    cout<<head->val;
    printing(head->next);
    
    return 0;
}