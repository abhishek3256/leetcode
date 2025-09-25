class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int l=0;
        // int cnt=0;
        // for( int num : nums){
        //     cnt+=num^1;
        //     if (cnt>k){
        //         cnt-=nums[l++]^1;
        //     }
        // }
        // return nums.size() - l;
        

    int left = 0;
    int right = 0;
    int max_length = 0;
    int zeros = 0;

    while (right < nums.size()) {
        if (nums[right] == 0) {
            zeros++;
        }
        
        while (zeros > k) {
            if (nums[left] == 0) {
                zeros--;
            }
            left++;
        }
        
        max_length = max(max_length, right - left + 1);
        right++;
    }
    
    return max_length;
    }
};