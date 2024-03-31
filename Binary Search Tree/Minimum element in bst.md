<h1><a href="" target="blank">Minimum Element in BST</a></h1>

## METHOD 1

```cpp

int minValue(Node* root) {

    if(root==NULL) return -1;
    
    while(root->left!=NULL)
        root=root->left;
        
    return root->data;
}

```

## METHOD 2

```cpp

 int minValue(Node* root) {
      
        if(root==NULL)
            return -1;
        
        int t = root->data;
        
        if(root->left!=NULL)
             t = minValue(root->left);
            
        return t;
    }
    
```