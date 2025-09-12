class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int array=0;
        for(int i=0;i<=n;i++) total^=i;
        for(int num : nums) array^=num;
        return total ^ array;
        
    }
};