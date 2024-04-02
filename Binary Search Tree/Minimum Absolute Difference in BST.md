<h1><a href="https://www.geeksforgeeks.org/problems/minimum-absolute-difference-in-bst-1665139652/1" target ="blank">Minimum Absolute Difference in BST</a></h1>

```cpp

 void inorder(Node* root,vector<int> & ans)
    {
        if(root==NULL)
            return;
            
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
    int absolute_diff(Node *root)
    {
        //Your code he
        
        vector<int>ans;
        
        inorder(root,ans);
        
        int a = INT_MAX;
        
        for(int i=0;i<ans.size()-1;i++)
                a = min(a,abs(ans[i]-ans[i+1]));
                
        return a;
    }
    
```