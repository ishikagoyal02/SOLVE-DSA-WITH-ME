<h1><a href="https://leetcode.com/problems/remove-nth-node-from-end-of-list/" target="_blank">Remove Nth Node From End of List</a></h1>

```cpp
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size = 0;
    ListNode* node = head;

    // Calculate the size of the linked list
    while (node != NULL) {
        size++;
        node = node->next;
    }

    // Calculate the position of the node before the target node
    int position = size - n;

    // Reset the node pointer to the head of the list
    node = head;

    // Traverse to the node just before the target node
    for (int i = 0; i < position - 1; i++) {
        node = node->next;
    }

    // If the node to remove is the head node
    if (position == 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    } else {
        // Update the next pointer of the node before the target node
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }

    return head;
}

```