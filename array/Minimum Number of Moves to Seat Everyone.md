<h1><a href="https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/description/" target="_blank">Minimum Number of Moves to Seat Everyone</a></h1>



## METHOD 1
```cpp
 int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int ans=0;

        for(int i=0;i<students.size();i++)
        {
            ans += abs(seats[i] - students[i]);
        }

        return ans;
    }
```