<h1><a href="https://www.geeksforgeeks.org/problems/help-nobita0532/1">Odd Even Problem</a></h1>

```cpp

string oddEven(string s) {
        // code here
        unordered_map<char, int> freq;
    
    // Count the frequency of each character in the string
    for (char c : s) {
        freq[c]++;
    }
    
    int x = 0;
    int y = 0;
    
    // Iterate through the frequency map
    for (const auto &pair : freq) {
        char chari = pair.first;
        int count = pair.second;
        
        // Determine the position of the character in the alphabet (1-indexed)
        int pos = chari - 'a' + 1;
        
        if (pos % 2 == 0 && count % 2 == 0) {
            // Even position and even frequency
            x++;
        } else if (pos % 2 != 0 && count % 2 != 0) {
            // Odd position and odd frequency
            y++;
        }
    }
    
    // Determine if the sum of x and y is even or odd
    if ((x + y) % 2 == 0) {
        return "EVEN";
    } else {
        return "ODD";
    }
    }

```