#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

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

Node *findMiddle(Node *head) {
    // Write your code here
  int c=0;
  int mid;

  Node* temp=head;
  while(temp!=NULL){
    temp=temp->next;
    c++;
  }

  if(c%2==0)
  {
    mid=(c/2)+1;
  }

  else{
    mid=(c+1)/2;
  }

  Node* ptr=head;

  while(mid>1)
  {
    ptr=ptr->next;
    mid--;
  }
  return ptr;
}
