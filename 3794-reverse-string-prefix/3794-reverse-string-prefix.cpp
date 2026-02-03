class Solution {
public:
    string reversePrefix(string s, int k) {
        int i=0;
        k=k-1;
        while(i<=k){
            swap(s[i],s[k]);
            i++;
            k--;
        }
        return s;
        
    }
};