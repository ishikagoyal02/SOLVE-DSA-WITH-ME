<h1><a href="https://leetcode.com/problems/even-odd-tree/description/" target="_blank">Even Odd Tree</a></h1>

```cpp

 bool find(TreeNode* root)
    {
        queue<TreeNode*> q;

        q.push(root);
        bool flag=true;

        while(!q.empty())
        {
            int n=q.size();

            TreeNode* prev=q.front();
            q.pop();

            if(flag && prev->val%2==0)
                return false;
            
            if(!flag && prev->val%2!=0)
                return false;

            if(prev->left!=NULL)
                    q.push(prev->left);

            if(prev->right!=NULL)
                    q.push(prev->right);

            for(int i=1;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(flag && (node->val%2==0 || prev->val>=node->val))
                    return false;
                
                if(!flag && (node->val%2!=0 || prev->val<=node->val))
                    return false;

                if(node->left!=NULL)
                    q.push(node->left);

                if(node->right!=NULL)
                    q.push(node->right);

                prev=node;
            
            }
                flag=!flag;
            }
            
        
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        
        if(root==NULL)
            return true;
        
         if(root->val %2 ==0)
            return false;
    
        return find(root);
    }
```