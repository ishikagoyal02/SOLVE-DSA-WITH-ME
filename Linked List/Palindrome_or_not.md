<h1><a href="https://leetcode.com/problems/palindrome-linked-list/" target="_blank">Palindrome or not</a></h1>


## METHOD 1 (USING ARRAY)
```cpp

 bool checkPal(vector<int> v)
    {
        for(int i=0;i<v.size()/2;i++)
            if(v[i]!=v[v.size()-1-i])
                return false;
        return true;
    }
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return true;

        vector<int> v;

        ListNode* temp=head;

        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }

        return checkPal(v);
    }

```

## METHOD 2 (REVERSEING LL)
```cpp

bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return true;

        ListNode* p=NULL;
        ListNode* ptr=head;

        // directing reversing ll lead to lose to original ll

        while(ptr!=NULL)           //creating reversed ll
        {
            ListNode* temp=new ListNode(ptr->val);   //creating duplicate node
            temp->next=p;

            p=temp;
            ptr=ptr->next;
        }


        while(head && p)
        {
            if(head->val!=p->val)
                return false;
            
            head=head->next;
            p=p->next;
        }

        return true;
    }


```

## METHOD 3 (REVERSEING HALF END)

```cpp

ListNode* Middle(ListNode* head)
 {
     ListNode* fast=head->next;
     ListNode* slow=head;

     while(fast!=NULL && fast->next!=NULL)
     {
         fast=fast->next->next;
         slow=slow->next;
     }
     return slow;   // last node of 1st half
 }

 ListNode* reverse(ListNode* head)
 {
     ListNode* p,*c,*n;
     p=NULL;
     c=head;
     while(c!=NULL)
     {
         n=c->next;
         c->next=p;
         p=c;
         c=n;
     }
     return p;
 }
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head->next==NULL)
            return true;
        ListNode* midnode=Middle(head);     //midnode as last node of 1st half

        midnode->next=reverse(midnode->next);   //reversing the 2nd half

        ListNode* head1=head;
        ListNode* head2=midnode->next;
        while(head2!=NULL)
        {
            if(head1->val!=head2->val)
                return false;
            head1=head1->next;
            head2=head2->next;    
        }
        return true;
    }

```










```cpp

 bool isPalindrome(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    ListNode* slow = head;
    ListNode* fast = head;

    // Find the middle of the list
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    ListNode* prev = nullptr;
    ListNode* curr = slow->next; // Start reversing from the beginning of the second half
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare the first half with the reversed second half
    ListNode* p1 = head;
    ListNode* p2 = prev;

    while (p2 != nullptr) {
        if (p1->val != p2->val)
            return false;
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

```

// in case of odd length ll, the middle node will included in 1nd half ll
ListNode* fast=head; 

// in case of odd length ll, the middle node will included in 2nd half ll
ListNode* fast=head->next; 
