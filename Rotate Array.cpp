 void rotateArr(int arr[], int d, int n){
        // code here
        
        if(d>n)
        {
            d=d%n;
        }
        vector<int> v;
        
        for(int i=0;i<d;i++)
            v.push_back(arr[i]);
            
          
        int t=0;  
        int i;
        for( i=d;i<n;i++)
        {
            arr[t]=arr[i];
            t++;
        }    
        
        for(i=0;i<v.size();i++)
        {
            arr[t]=v[i];
             t++;
        }
    }
