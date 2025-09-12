class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0;
        for(int num : nums) {
            count=count^num;

        }
        return count;
    }
};