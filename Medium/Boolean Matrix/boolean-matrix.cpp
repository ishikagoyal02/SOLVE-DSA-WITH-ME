//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    
    void booleanMatrix(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> row_flag(rows, 0); // To mark which rows should be set to 1
    vector<int> col_flag(cols, 0); // To mark which columns should be set to 1
    
    // Iterate through the original matrix to find 1s and mark the rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                row_flag[i] = 1;
                col_flag[j] = 1;
            }
        }
    }
    
    // Update the matrix based on the flags
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (row_flag[i] == 1 || col_flag[j] == 1) {
                matrix[i][j] = 1;
            }
        }
    }
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends