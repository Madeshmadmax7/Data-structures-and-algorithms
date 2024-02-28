#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
node*head;
void insert(int x){
	node*newnode=new node();
	newnode->data=x;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		newnode->next=NULL;
		temp->next=newnode;
	}
}
void display(){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void deleted(){
    node *temp=head;
    node *t1=temp->next;
    while(t1->next!=NULL){
        t1=t1->next;
        temp=temp->next;
    }
    temp->next=NULL;
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
	deleted();
}
