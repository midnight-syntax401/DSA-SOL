class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // 1. Create a copy of the heights array to represent the 'expected' order
        vector<int> expected = heights;
        
        // 2. Sort the copy in non-decreasing order
        sort(expected.begin(), expected.end());
        
        // 3. Compare the two arrays and count the mismatches
        int count = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }
        
        return count;
    }
};