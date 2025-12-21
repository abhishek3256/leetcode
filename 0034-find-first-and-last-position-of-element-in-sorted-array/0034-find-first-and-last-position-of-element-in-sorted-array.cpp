class Solution {
public:
int lowerbound(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int ans=n;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]>=target){
                ans=m;
                h=m-1;

            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
int upperbound(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int ans=n;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]>target){
                ans=m;
                h=m-1;

            }
            else{
                l=m+1;
            }
        }
        return ans;
    }    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb=lowerbound(nums,target);
        if(lb==n || nums[lb]!=target) return {-1,-1};
        int ub=upperbound(nums,target);
        return {lb,ub-1};
        
    }
};