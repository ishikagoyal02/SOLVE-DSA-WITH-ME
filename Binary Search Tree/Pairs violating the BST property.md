<h1><a href="https://www.geeksforgeeks.org/problems/pairs-violating-bst-property--212515/1" target="blank" >Pairs violating the BST property</a></h1>

## METHOD 1 (using inorder TLE)
```cpp

 void inorder(Node* root, vector<int> & ans)
    {
        if(root==NULL)
            return;
            
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

    int pairsViolatingBST(int n, Node *root) {
    
        vector<int> ans;
        
        inorder(root,ans);
        
        int t=0;
        
        for(int i=0;i<ans.size()-1;i++)
        {
            for(int j=i+1;j<ans.size();j++)
            {
                if(ans[i]>ans[j])
                    t++;
            }
        }
        
        return t;
    }

```