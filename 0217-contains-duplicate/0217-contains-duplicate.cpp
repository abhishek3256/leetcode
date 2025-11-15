class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for( auto r: nums){
            mp[r]++;
        }
        for( auto m:mp){
            if(m.second>1) {
                return true;
            }
        }
        return false;
    }
};