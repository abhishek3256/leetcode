class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        unordered_map<char,int> count;
        int n= s.size();
        int l=0,r=0;
        while(r<n){
            count[s[r]]++;
            while(count.size()==3){
                count[s[l]]--;
                ans+= (n-r);
                if(count[s[l]]==0){
                    count.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};