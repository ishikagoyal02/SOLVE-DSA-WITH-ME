 int search(int a[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            if(a[mid]==key)
                return mid;
                
            else if(a[mid]>=a[l])                                   //LEFT OF MID IS SORTED
            {
  
                if(a[mid]>=key && key>=a[l])                          // EXAMPLE-----mid value=9 ,l value =5, k value=7
                    h=mid-1;
                    
                else    
                //else if (a[mid]< key && a[mid]>=a[h])               //Example------ 5 6 7 8 9 11 1 2 3 mid value=9, key value= 10 , h value =3
                    l=mid+1;
            }
            
            else
            {
                    if(a[mid]<key && a[h]>=key )                 // 7 8 9 10 1 2 3 5 6 mid value=2, key value=3
                        l=mid+1;
                        
                    else    
                    //else if(a[mid]>key && a[l]<=key)    
                        h=mid-1;
            }
            
        }
        return -1;
    }
