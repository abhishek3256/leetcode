class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int k = 0;
        for(int i = 0; i < words.size(); i++){
            int j = 0;
            for(; j < words[i].size(); j++){
                if(k == s.size() || s[k++] != words[i][j]){
                    return false;
                }
            }            
            if(k == s.size()){
                return true;
            }
        }

        return false;
    }
};