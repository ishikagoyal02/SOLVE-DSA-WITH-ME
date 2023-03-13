int findMin(int a[], int n)
    {
        int s=0;
        int e=n-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(a[mid]<=a[(mid+1)%n] && a[mid]<=a[(mid-1+n)%n])
            {
                return a[mid];
            }
            
            else if(a[mid]<=a[e])
                e=mid-1;
            
            else if(a[mid]>=a[s]) 
                s=mid+1;
        }
        return -1;
    }
