class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>mp;
        for( int c:nums){
            count=count+mp[c-k];
            count=count+mp[c+k];
            mp[c]++;

        }
        return count;
    }
};