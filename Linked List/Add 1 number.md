<h1><a href="https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1" target="_blank">Add 1 number in LL</a></h1>

# METHOD (WORKING)
```cpp
 Node* reverse(Node* head) {
    Node* p, *cur, *nn;
    p = NULL;
    cur = head;
    nn = NULL;
    
    while (cur != NULL) {
        nn = cur->next;
        cur->next = p;
        
        p = cur;
        cur = nn;
    }
    
    return p;
}

Node* addOne(Node *head) {
    head = reverse(head);
    
    Node* cur = head;
    int carry = 1, sum = 0;
    Node* t=head;
    
    while (cur != NULL) {
        sum = cur->data + carry;
        cur->data = sum % 10;
        carry = sum / 10;
        
        if (carry == 0)
            break;
            
        
        t=cur;
        cur = cur->next;
    }
    
   // After the while loop
if (carry != 0) {
    // If cur is null, it means we need to add a new node at the end of the list
    if (cur == NULL) 
    {
        t->next= new Node(carry);
    }
    
}
return reverse(head);
    
    
}
```

# METHOD 2 (Not working for large input)

```cpp

long long mod = 10e9 +7;
    public:
    Node* addOne(Node *head) 
    {
       Node* cur = head;
       if(head == NULL)
        return new Node(1);
       
       long long int num = 0;
       
       while(cur != NULL)
       {
           num = num * 10 + cur->data;
           cur = cur->next;
       }
       
       Node* head1 = NULL;
       
       //num = num % mod;
       num++;
      // num = num % mod;
       
       while( num != 0)
       {
           int rem = num%10;
           num = num /10;
           
           if( head1 == NULL)
                head1 = new Node(rem);
            else
            {
                Node* nn= new Node(rem);
                nn->next = head1;
                head1 = nn;
            }
            
       }
       
       return head1;
    }
```