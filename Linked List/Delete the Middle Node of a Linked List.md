<h1><a href="https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/" target="_blank">Delete the Middle Node of a Linked List</a></h1>

```cpp

ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return NULL;

        ListNode* slow=head;
        ListNode* fast=head->next;          //if initializaing fast=head,this step before while  fast=fast->next->next;

        while(fast->next!=NULL){

            fast=fast->next;
            if(fast->next==NULL)
                break;
            else
                fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;
        return head;
    }

    ```