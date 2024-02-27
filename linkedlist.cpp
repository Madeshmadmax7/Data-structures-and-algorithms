#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data){
    node *newnode=new node();
    newnode->data=data;
    if(head==NULL){
        newnode->next=NULL;
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        insert(num);
    }
    display();
}
