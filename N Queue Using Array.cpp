public:
    // Initialize your data structure.
      int n,s;
      int *front;
      int *rear;
      int *next;
      int *arr;
      int freespot;
    NQueue(int n, int s){
        // Write your code here.
        this->n=n;                   //n is no. of queues
        this->s=s;                   //s is size of array
       front=new int[n];
       rear=new int[n];
       next=new int[s];
       arr=new int[s];
        // freespot=new int;

        for(int i=0;i<n;i++)
        {
            front[i]=-1;             //initialiation of front array
            rear[i]=-1;              //initialiation of rear array
        }

        for(int i=0;i<s;i++)         //initialiation of next array
        {
            next[i]=i+1;
        }
        next[s-1]=-1;

        freespot=0;

    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m)
    {
        // Write your code here.

        if(freespot==-1)
            return false;
        int index;
        index=freespot;

        freespot=next[freespot];

        if(front[m-1]==-1)             //first insertion
                 front[m-1]=index;
    

        else
                next[rear[m-1]]=index;    //linking

        rear[m-1]=index;                    //updating rear
            arr[index]=x;                   //inserting queue
            next[index]=-1;
        return true;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        if(front[m-1]==-1)                  //front is empty
            return -1;

        int index=front[m-1];               //find index
        int val=arr[index];                 //value at index
        front[m-1]=next[front[m-1]];        //front ko aage bdao
       
                                    //set freespot
        next[index]=freespot;
        freespot=index;  
            return val;
    }
