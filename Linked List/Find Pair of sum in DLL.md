<h1><a href="https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1" target="_blank">Find intersection of 2 linked list</a></h1>

# METHOD 1
```cpp
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node* p ,*q;
        vector<pair<int, int>>v;
        
        for( p=head ; p->next!=NULL ; p=p->next)
        {
            for( q= p->next; q!=NULL ; q=q->next)
            {
                if(p->data + q->data == target)
                    v.push_back({p->data, q->data});
            }
        }
        
        return v;
    }
```

# METHOD 2(TWO POINTERS)

```cpp

 vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
    vector<pair<int, int>> v;

    // Create two pointers, one from the beginning and one from the end
    Node *start = head, *end = head;

    // Move end pointer to the last node
    while (end->next != nullptr)
        end = end->next;

    // Iterate until start is before end
    while (start != nullptr && end != nullptr && start != end && start->data <= end->data) {
        int sum = start->data + end->data;
        
        if (sum == target) {
            v.push_back({start->data, end->data});
            start = start->next;
            end = end->prev;
        } else if (sum < target) {
            start = start->next;
        } else {
            end = end->prev;
        }
    }

    return v;
}

```