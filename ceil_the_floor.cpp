pair<int, int> getFloorAndCeil(int a[], int n, int x) {
    // code here
    
    int d=-1;                                                 //for ceil
    int f=-1;                                                 // for floor
    pair<int,int> p;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)                                             //if ith element is equal to given element then floor=ceil=x
        {
            d=f=a[i];
            break;
        }
        
        else if(a[i]<x && d<a[i])                             //if element is smaller than x and greater than ceil element then ith element become ceil element
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
