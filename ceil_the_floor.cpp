pair<int, int> getFloorAndCeil(int a[], int n, int x) {
  
    //for ceil
    int d=-1;      
    
    // for floor
    int f=-1;      
    
    pair<int,int> p;
    for(int i=0;i<n;i++)
    {
        //if ith element is equal to given element then floor=ceil=x
        
        if(a[i]==x)     
        {
            d=f=a[i];
            break;
        }
        
        //if element is smaller than x and greater than ceil element then ith element become ceil element
        
        else if(a[i]<x && d<a[i])     
        {
            d=a[i];
        }
        
        else if(a[i]>x)
        {
            if(f==-1)
                 f=a[i];
            else if( f>a[i])
                f=a[i];
        }
    }
    
    p.first=d;
    p.second=f;
    return p;
}
