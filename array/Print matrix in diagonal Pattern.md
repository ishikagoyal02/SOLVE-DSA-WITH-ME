<h1><a href="https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1" target="_blank">Print matrix in diagonal pattern</a></h1>

```cpp

vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         int r=0,c=0,i=0;
         int n = mat.size();
         bool up = true;
         vector<int> ans(n*n,0);
         
         while(r<n && c<n)
         {
             if(up)
             {
                 while(r>0 && c<n-1)
                 {
                     ans[i++] = mat[r][c];
                     r--;
                     c++;
                 }
                 
                 ans[i++] = mat[r][c];
                 
                 if(c==n-1)
                 {
                     r++;
                     //up = false;
                 }
                 else
                 {
                     c++;
                    // up = false;
                 }
             }
             
             else
             {
                 while(r<n-1 && c>0)
                 {
                     ans[i++] = mat[r][c];
                     c--;
                     r++;
                 }
                 
                 ans[i++] = mat[r][c];
                 
                 if(r==n-1)
                 {
                     c++;
                    // up = true;
                 }
                 
                 else
                {
                    r++;
                   // up = true;
                }
             }
             
             up = !up;
         }
         
         return ans;
    }

```