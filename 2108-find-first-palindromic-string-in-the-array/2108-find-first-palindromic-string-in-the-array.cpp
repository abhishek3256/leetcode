class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int fPtr = 0;
        int sPtr = n - 1;
        while (fPtr < sPtr) {
            if (s[fPtr] != s[sPtr])
                return 0;
            fPtr++;
            sPtr--;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        string ans = "";
        for (int i = 0; i < n; i++) {

            if (isPalindrome(words[i])) {

                ans = words[i];
                break;
            }
        }
        return ans;
    }
};