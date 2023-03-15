int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> v;
        int count=0;
        for(int i=0;i<n;i++)
        {
            auto it=v.find(k-arr[i]);
            if(it!=v.end())
                count+=it->second;
            v[arr[i]]++;    
        }
        return count;
    }
