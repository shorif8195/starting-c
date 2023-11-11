#include<bits/stdc++.h>
using namespace std;
class node1{
    public:
    int val1;
    node1 *next1;
    node1(int val){
        this->val1=val;
        this->next1=NULL;
    }
};

void insertion1(node1 *&head,int v){
    node1 *newNode = new node1(v);
    node1 *temp = head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while (temp->next1!=NULL){
        temp=temp->next1;
    }
    temp->next1 = newNode;
    temp = temp->next1;
    

}
// void printing(node1 *&head){
//     while(head!=NULL){
//         std::cout<<head->val1;
//         head=head->next1;
//     }
// }


void chacking(node1 *&h1,node1 *&h2,int s1,int s2){
    node1 *temp1=h1;
    node1 *temp2= h2;
    if(s1!=s2){
        cout<<"NO\n";
        return;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val1!=temp2->val1){
            cout<<"NO\n";
            return;
        }
        temp1= temp1->next1;
        temp2= temp2->next1;

    }
    cout<<"YES\n";





}
int size(node1 *head){
    node1 *temp = head;
    int count = 0;
    if(head == NULL){
        return 0;
    }
    while (temp!=NULL){
        count++;
        temp=temp->next1;
    }
    return count;
}
int main(){
    node1 *head1 = NULL;
    node1 *head2 = NULL;

    while(true){
        int v;
        std::cin>>v;
        if(v==-1)break;
        insertion1(head1,v);
        // printing(head1);


    }
    while (true){
        int v;
        std::cin>>v;
        if(v==-1)break;
        insertion1(head2,v);
    }
    int size1 = size(head1);
    int size2 = size(head2);
    chacking(head1,head2,size1,size2);
    
    return 0;
}