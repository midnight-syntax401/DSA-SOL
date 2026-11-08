class Solution {

    bool ispossible(vector<int>& weights, int days, int capacity) {
        int daysNeeded = 1;
        int currentLoad = 0;
        
        // Yahan bhi normal for loop laga diya gaya hai
        for (int i = 0; i < weights.size(); i++) {
            int weight = weights[i];
            
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = weight;
            } else {
                currentLoad += weight;
            }
        }
        
        return daysNeeded <= days;
    }


public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxweight=0;
        int totalweight=0;

    for(int i=0; i<weights.size(); i++){
        int weight=weights[i];
        maxweight=max(maxweight, weight);
        totalweight+=weight;
    }
        int low=maxweight;
        int high=totalweight;
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(ispossible(weights, days, mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};