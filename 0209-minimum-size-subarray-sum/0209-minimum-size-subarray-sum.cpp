class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int left=0;
        int minlength=INT_MAX;
        for( int right=0;right<n;right++){
            sum=sum+nums[right];
            while(sum>=target){
            minlength=min(minlength,right-left+1);
            sum=sum-nums[left++];
            }
        }
        return minlength==INT_MAX?0:minlength;
        
    }
};