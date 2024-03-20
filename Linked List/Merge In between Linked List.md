<h1><a href="https://leetcode.com/problems/merge-in-between-linked-lists/description/" target="blank">Merge in between Linked List</a></h1>

```cpp

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* last2 = list2;
        while(last2->next!=NULL)
            last2=last2->next;

        int i =0;
        ListNode* p= list1;

        while(p!=NULL && i!=a-1)
        {
            p = p->next;
            i++;
        } 

        cout<<p->val<<endl;

        ListNode* t = p;

        while(t!=NULL && i!=b)
        {
            t = t->next;
            i++;
        }

        p->next = list2;
        last2->next = t->next;

        return list1;
        
    }

```