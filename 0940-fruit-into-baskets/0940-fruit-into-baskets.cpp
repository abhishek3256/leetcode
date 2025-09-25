class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int l = 0;
        int r = 0;
        int maxlength = 0;
        unordered_map<int, int> m;
        for (int x : fruits) {
            m[x]++;
            while (m.size() > 2) {
                m[fruits[l]]--;
                if (m[fruits[l]] == 0) {
                    m.erase(fruits[l]);
                }
                l++;
            }
            maxlength = max(maxlength, r - l + 1);
            r++;
        }
        return maxlength;;
    }
};
