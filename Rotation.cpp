int findKRotation(int a[], int n) {
	    // code here
	    int s=0;
	    int e=n-1;
	    while(s<=e)
	    {
	    int mid=(e+s)/2;
	        int prev=(mid-1+n)%n;
	        int next=(mid+1)%n;
	        
	        if(a[mid]<=a[prev] && a[mid]<=a[next])
	        {
	            //cout<<"mid= "<<mid<<endl;
	            return mid;
	        }
	        else if(a[mid]<=a[e])
	            e=mid-1;
	        
	        else if(a[mid]>=a[s])
	            s=mid+1;
	    }
	    return 0;
	}
