bool DetectLoopFLOYD(Node* head , Node* &prev){


   if(head == NULL || head->next == head){
       return true;
   }


   else if(head->next == NULL){
       return false;
   }


   else{

           Node* slow = head;
           Node* fast = head->next;

           while(slow != fast  &&  fast!= NULL && fast->next != NULL){

               slow = slow ->next;
               fast = fast ->next -> next;
               
           }

           if(slow == fast)
           {

               prev = fast;
               
               slow = head;

               while( fast->next != slow && fast != slow){

                       prev = fast->next;

                       slow = slow->next;
                       fast = fast->next;
               }

                return true;
           }
       
       

           return false;
           
       }


}

 

 

 

Node *removeLoop(Node *head)
{
   if(head == NULL){
       return NULL;
   }
   
   Node* prev = head;
   
   if(!DetectLoopFLOYD(head, prev)){    // Loop Not present           
          return head;
   }
   
    prev->next = NULL;
   
   return head;
   
   
}
