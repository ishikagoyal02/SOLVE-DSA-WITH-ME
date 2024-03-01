<h1><a href="https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1" target="_blank">Given a linked list of 0s, 1s and 2s, sort it</a></h1>

```cpp
void insertinto(Node* &tail,Node* p)
{
    tail->next=p;
    tail=p;
}
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
         Node* head0=new Node(-1);
         Node* tail0=head0;
         Node* head1=new Node(-1);
         Node* tail1=head1;
         Node* head2=new Node(-1);
         Node * tail2=head2;
         
         Node* p=head;
         
         while(p!=NULL)
         {
             int value=p->data;
             
             if(value==0)
                insertinto(tail0,p);
                
            else if(value==1)
                insertinto(tail1,p);
                
            else
                insertinto(tail2,p);   
                
            p=p->next;    
         }
         
         //merge them
         if(head1->next!=NULL)
            tail0->next=head1->next;
        else
            tail0->next=head2->next;
        
        tail1->next=head2->next;
        tail2->next=NULL;
        
        //setup head
        head=head0->next;
        delete(head0);
        delete(head1);
        delete(head2);
        return head;
    }
};
```