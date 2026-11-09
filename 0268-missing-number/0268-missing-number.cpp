class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        
        // 1. Array ke elements ka XOR
        for(int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }
        
        // 2. 0 se n tak ke numbers ka XOR
        for(int i = 0; i <= n; i++) {
            ans = ans ^ i;
        }
        
        return ans;
    }
};
     