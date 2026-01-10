class Solution {
public:
    bool allZero(vector<int>& counter) {
        for (int& x : counter) {
            if (x != 0) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        vector<int> counter(26 , 0);

        int k = p.length();
        for (auto ch : p) {
            counter[ch - 'a']++;
        }

        int i = 0 , j = 0;
        vector<int> res;
        while(j < n) {
            counter[s[j] - 'a']--;
            if (j - i + 1 == k) {
                if (allZero(counter)) res.push_back(i);
                
                counter[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return res;
    }
};