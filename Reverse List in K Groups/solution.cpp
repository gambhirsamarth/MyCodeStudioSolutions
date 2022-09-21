#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    // base case
    if(head==NULL)
        return head;
    
    // Step1: Reverse First K Nodes
    Node* next=NULL;
    Node* curr=head;
    Node* prev= NULL;
    int count=0;
    
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    
    // Step 2 Recursion 
    if(next!= NULL){
        head->next=kReverse(next,k);
    }
    
    // Step 3: Return head of reversed list
    return prev;
}
