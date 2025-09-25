class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cs = 0, ms = 0;
        for (int i : nums) {
            cs += i;
            ms = max(cs, ms);
            if (i == 0) {
                cs = 0;
            }
        }
        return ms;
    }
};