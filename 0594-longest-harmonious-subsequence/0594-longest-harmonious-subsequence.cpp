class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> map;
        int res = 0;
        for (const auto n : nums) {
            if (map.contains(n)) {
                map[n]++;
            } else {
                map[n] = 1;
            }

            if (map.contains(n+1)) {
                res = max(map[n] + map[n+1], res);
            }

            if (map.contains(n-1)) {
                res = max(map[n] + map[n-1], res);
            }
        }

        return res;
    }
};