<h1><a href="https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1" target="_blank">Delete all occurence of a given node in DLL</a></h1>

```cpp

void deleteAllOccurOfX(struct Node** head, int x) {
    if (*head == NULL)
        return;

    // Handle the case where the value to delete is at the beginning of the list
    while (*head != NULL && (*head)->data == x) {
        struct Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }

    struct Node* p = *head;

    while (p != NULL) {
        struct Node* nn = p->next;

        if (p->data == x) {
           
            p->prev->next = nn;
            
            // If the node to delete is at the end of the list
            if (nn != NULL)
                nn->prev = p->prev;

            delete p;
        }
        p = nn;
    }
}
```