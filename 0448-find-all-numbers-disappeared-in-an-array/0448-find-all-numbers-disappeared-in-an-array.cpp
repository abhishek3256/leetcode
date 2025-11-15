class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> ans;
        for( auto a:nums) mp[a]++;
       for (int i = 1; i <= n; i++) {
            if (mp[i] == 0) {                         // missing numbers
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};