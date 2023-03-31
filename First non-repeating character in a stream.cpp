	string FirstNonRepeating(string A){
		    // Code here
		    string w="";
		    queue<int> q;
		    unordered_map<char,int> m;
		    int flag;
		    
		    for(int i=0;A[i]!='\0';i++)
		    {
		        q.push(A[i]);
		        m[A[i]]++;
	
		           
		           while(!q.empty())
		           {
		               if(m[q.front()]>1)
		               {
		                   q.pop();
		               }
		               
		               else
		               {
		                   w+=q.front();
		                   break;
		               }
		           }
		           
		           if(q.empty())
		                 w+="#";
		    }
		  
		    return w;
		    }
