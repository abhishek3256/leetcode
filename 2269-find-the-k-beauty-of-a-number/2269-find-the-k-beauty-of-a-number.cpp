class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int l = 0 , ans = 0;
        string str = to_string(num);
        while(l <= str.size()-k){
            int temp = stoi(str.substr(l,k));
            if(temp != 0 && num%temp == 0)
            ans++;

            l++;
        }
        return ans;
    }
};