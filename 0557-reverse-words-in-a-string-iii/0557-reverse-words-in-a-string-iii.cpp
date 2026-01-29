class Solution {
public:
    string reverseWords(string s) {
        int i = 0, n = s.size();
        while (i < n) {
            int l = i;
            while (i < n && s[i] != ' ') i++;
            int r = i - 1;
            while (l < r) {
                swap(s[l++], s[r--]);
            }
            i++;
        }
        return s;
    }
};