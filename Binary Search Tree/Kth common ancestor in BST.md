<h1><a href="https://www.geeksforgeeks.org/problems/kth-common-ancestor-in-bst/1" target="blank">Kth common ancestor in BST</a></h1>

```cpp

int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        
        vector<int> vec;
        
        while(true)
        {
            vec.push_back(root->data);
            
            if(x > root->data && y>root->data)
                root = root->right;
                
            else if(x< root->data && y< root->data)
                root = root->left;
                
            else
                break;
        }
        
        int t = vec.size()-k;
        
        if(t<vec.size())
            return vec[t];
            
        return -1;
    }
    
```