#include<iostream>
using namespace std;


struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};


Node* merge(Node* t1,Node* t2){
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    while(t1!=NULL && t2!=NULL){
        if(t1->data <= t2->data){
            temp->bottom = t1;
            temp = temp->bottom;
            t1 = t1->bottom;
        }
        else{
            temp->bottom = t2;
            temp = temp->bottom;
            t2 =t2->bottom;
        }
    }
    if(t1)temp->bottom = t1;
    if(t2)temp->bottom = t2;
    
    return dummy->bottom;
} 

Node *flatten(Node *root)
{
   // Your code here
    if(root==NULL || root->next==NULL){
        return root;
    }
    Node* new_head = flatten(root->next);
    return merge(root,new_head);
}

int main(){
    
}