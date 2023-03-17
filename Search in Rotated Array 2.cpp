bool Search(int N, vector<int>& a, int key) {
        int s=0;
        int e=N-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(a[mid]==key)
                return 1;
              
            if((a[mid]==a[s] && a[mid]==a[e]))
            {
                s++;
                e--;
            }
            else if(a[mid]<=a[e])                   //right part is sorted
            {
                if(a[mid]<key && a[e]>=key)
                    s=mid+1;
                else
                    e=mid-1;
            }
            else
            {
                if(a[mid]>key && key>=a[s])
                    e=mid-1;
                else
                    s=mid+1;
            }
        }
        return 0;
    }
