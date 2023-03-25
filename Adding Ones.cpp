                                                      //  METHID 1
                                                              //with time complexity= O(n*k)

    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int i=0;i<n;i++)
            a[i]=0;
        
        int i;
        for(int j=0;j<(k);j++)
        {
          i=updates[j]-1;
          for(int t=i;t<n;t++)
                a[t]=a[t]+1;
               
        }
    }

                                                                  //METHOD 2
                                                                          //with time cpmlexity= 0(max(k,n))


 void update(int a[], int n, int updates[], int k)
    {
      int i=0;
      while(i<k)
      {
          a[updates[i]-1]++;
          i++;
      }
       
       i=1;
       while(i<n)
       {
           a[i]=a[i]+a[i-1];
           i++;
       }
       
        
    }
