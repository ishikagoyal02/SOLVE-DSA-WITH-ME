int kthElement(int arr1[], int arr2[], int n, int m, int k){
  
        if(n>m)
            return kthElement(arr2,arr1,m,n,k);
            
        int low=max(0,k-m);
        int high=min(k,n);
      
      
        
        while(low<=high)
        {
            int cut1=(high+low)>>1;
            int cut2=k-cut1;
            
        //     if (cut1 > n) {
        //     high = cut1 - 1;
        //     continue;
        // }
        
        // if (cut2 > m) {
        //     low = cut1 + 1;
        //     continue;
        // }
            
            //cout<<"low= "<<low<<" high= "<<high<<" cut1= "<<cut1<<" cut2= "<<cut2<<endl;
            
            //l1=arr1[cut1-1];
            
            int l1=cut1 ? arr1[cut1-1]: INT_MIN;
            int l2= cut2 ? arr2[cut2-1]:INT_MIN;
            
            int r1= cut1>=n ? INT_MAX:arr1[cut1];
            int r2= cut2>=m ? INT_MAX:arr2[cut2];
            
            if((l1<=r2) && (l2<=r1))
                return max(l1,l2);
            
            else if(l1>r2)
                high=cut1-1;
            
            else if(l2>r1)
                low=cut1+1;
        }
        return 1;
    }
