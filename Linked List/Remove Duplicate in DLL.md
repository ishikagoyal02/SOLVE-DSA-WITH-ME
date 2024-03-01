<h1><a href="https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1" target="_blank">Remove Duplicate from DLL</a></h1>


```cpp
Node * removeDuplicates(struct Node *head)
    {
        struct Node* p = head;
        
        while(p->next!=NULL)
        {
            if(p->data == p->next->data)
            {
                struct Node* nn = p->next->next;
                
                if(nn!=NULL)
                {
                    nn->prev =p;
                }
                p->next=nn;
            }
            
            else
            
                p=p->next;
        }
        
        return head;
    }
```