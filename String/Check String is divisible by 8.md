<h1><a href="https://www.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-83957/1" target="_blank">Check string is divisible by 8 or not</a></h1>

```cpp
 int DivisibleByEight(string s){
        //code here
        
        if(s.size()<=3)
        {
            int num=stoi(s);
            return num%8==0 ? 1:-1;
        }
        
        else
        {
            string last3 = s.substr(s.size()-3,3);
            int num=stoi(last3);
            return num%8==0 ? 1:-1;
        }
    }

```