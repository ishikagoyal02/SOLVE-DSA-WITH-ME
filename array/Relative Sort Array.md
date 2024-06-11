<h1><a href="https://leetcode.com/problems/relative-sort-array/description/" target="_blank">Relative Sort Array</a></h1>

```cpp

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    // Step 1: Count the occurrences of each element in arr1
    unordered_map<int, int> countMap;
    for(int num : arr1) {
        countMap[num]++;
    }

    // Step 2: Place elements from arr2 into the result array
    vector<int> result;
    for(int num : arr2) {
        while(countMap[num] > 0) {
            result.push_back(num);
            countMap[num]--;
        }
    }

    // Step 3: Collect remaining elements not in arr2 and sort them
    vector<int> remaining;
    for(int num : arr1) {
        if(countMap[num] > 0) {
            remaining.push_back(num);
            countMap[num]--;
        }
    }
    sort(remaining.begin(), remaining.end());

    // Step 4: Append the sorted remaining elements to the result array
    for(int num : remaining) {
        result.push_back(num);
    }

    return result;
}

```