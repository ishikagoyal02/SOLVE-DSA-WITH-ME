<h1><a href="https://leetcode.com/problems/merge-two-sorted-lists/description/" target="_blank">Merege two sorted lsit</a></h1>

[LEETOCE SOL](https://leetcode.com/problems/merge-two-sorted-lists/solutions/4803312/optimal-c-solution-merge-two-sorted-lists)

# METHDO 1
```cpp
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* p = list1;
        ListNode* t = list2;

        ListNode* dummyNode = new ListNode(-1);
        ListNode* c = dummyNode;

        while(p!=NULL && t!=NULL)
        {
            if(p->val >= t->val)
            {
                c->next = t;
                t = t->next;
                c= c->next;
            }

            else
            {
                c->next = p;
                p = p->next;
                c = c->next;
            }
        }

        while(p!=NULL)
        {
            c->next = p;
            p = p->next;
            c= c->next;
        }

        while(t!=NULL)
        {
            c->next = t;
            t = t->next;
            c= c->next;
        }

        return dummyNode->next;
    }
```