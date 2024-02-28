<h1><a href="https://leetcode.com/problems/sort-list/description/" target="_blank">Sort List</a></h1>

```cpp

ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode* p=head;

        while(p!=NULL)
        {
            ans.push_back(p->val);
            p=p->next;
        }

        sort(ans.begin(),ans.end());

        ListNode* temp=new ListNode(0);
        p=temp;
        int i=0;

        while(i<ans.size())
        {
            ListNode* nn=new ListNode(ans[i]);
            temp->next=nn;

            temp=nn;
            i++;
        }
        return p->next;
    }
    
```