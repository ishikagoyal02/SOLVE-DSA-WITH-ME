<h1><a href="https://leetcode.com/problems/find-bottom-left-tree-value/description/" target="_blank">Find bottom Left of tree</a></h1>

```cpp
int findBottomLeftValue(TreeNode* root) {

        int ans=root->val;
        queue<TreeNode*>q;

        q.push(root);

        while(q.size()!=0)
        {
            int n=q.size();
            

            for(int i=0;i<n;i++)
            {
                TreeNode* cur=q.front();
                q.pop();

                if(i==0)
                    ans=cur->val;

                if(cur->left!=NULL)
                {
                    q.push(cur->left);
                }
                
                if(cur->right!=NULL)
                {
                    q.push(cur->right);
                }

                
            }
        }

        return ans;
    }

```