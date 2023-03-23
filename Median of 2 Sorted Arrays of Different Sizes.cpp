double MedianOfArrays(vector<int>& v1, vector<int>& v2)
    {
        // Your code goes here
            int n=v1.size() + v2.size();
            double c[n];
            int a=0,b=0,k=0;
            

            while(a<v1.size() && b<v2.size())
            {
                if(v1[a]> v2[b])
                {
                    c[k]=v2[b];
                    b++;
                    k++;
                }
                else
                {
                    c[k]=v1[a];
                    a++;
                    k++;
                }
            }
            for(int t=a;t<v1.size();t++)
            {
                 c[k]=v1[t];
                    k++;
            }
            
            for(int t=b;t<v2.size();t++)
            {
                c[k]=v2[t];
                 
                    k++;
            }
            
            int l=0;
            int e=k-1;
            
            int mid=n/2;
            if(n%2!=0)
                return c[mid];
            else
                return (c[mid]+c[mid-1])/2;
    
    }
