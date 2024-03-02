<h1><a href="https://leetcode.com/problems/rotate-list/description/" target="_blank">Rotate List</a></h1>

# METHOD 1

```cpp
node* reverseList(node* start, node* end) {
    node* prev = nullptr;
    node* current = start;
    node* next = nullptr;

    while (current != end) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}
    


 struct node *reverseIt(struct node *head, int k) {
    if (head == nullptr || k == 1)
        return head;

    node *dummy=new node(-1);
    node* start=head;
    node* end=head;
    node* tail=dummy;
   
    int cnt=1;
    while(end!=NULL)
    {    cnt =1;
        while(cnt<=k && end!=NULL)
        {
            end=end->next;
             cnt++;
        }
    tail->next=reverseList(start, end);
              tail=start;
              start=end;
    }


return dummy->next;
}

```

# METHDO 2


```cpp

ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr || k == 0) return head; // If the list is empty or rotation count is 0, return the original head

    // Find the length of the list and the last node
    int length = 1; // Initialize with 1 because head is not nullptr
    ListNode* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        length++;
    }

    // Adjust k to avoid unnecessary rotations
    k %= length;
    if (k == 0) return head; // If k is now 0, return the original head

    // Find the new tail node
    ListNode* newTail = head;
    for (int i = 0; i < length - k - 1; i++) {
        newTail = newTail->next;
    }

    // Update pointers to perform rotation
    ListNode* newHead = newTail->next;
    newTail->next = nullptr; // Set the new tail's next pointer to nullptr
    tail->next = head; // Link the original tail to the original head to form a circular list

    return newHead; // Return the new head of the rotated list
}
```