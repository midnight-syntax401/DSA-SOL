class Solution {

    bool ispossible(vector<int>& nums, int n,int m, long long mid){
        long long studentcount=1;
        long long pagesum=0;

        for(int i=0; i<n; i++){
            if(pagesum+nums[i]<=mid){
                pagesum+=nums[i];
            }
            else{
                studentcount++;
                if(studentcount>m||nums[i]>mid){
                    return false;
                }
               
                pagesum=nums[i];
            }
        }
        return true;
    }
public:
    long long splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        
        if(m>n) return -1;

        long long s=0;
        long long sum=0;

        for(int i=0; i<n; i++){
            sum+=nums[i];
        }

        long long e=sum;
        long long ans=-1;
        long long mid=s+(e-s)/2;

        while(s<=e){

            if(ispossible(nums, n, m, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
return ans;
    }
};