class Solution {
public:
    string reverseByType(string s) {

        vector<char> lw , sp ; 


        for(char c : s){
            if(c>='a' && c<='z'){
                lw.push_back(c);
                
            }else{
                sp.push_back(c);
            }
        }

        reverse(lw.begin() , lw.end());
        reverse(sp.begin() , sp.end());

        string res ;

        int l=0 , r = 0 ; 
        


        for(char c : s){
            if(c>='a' && c<='z'){
                res.push_back(lw[l]);
                l++;
            }else{
                res.push_back(sp[r]);
                r++;
            }
        }


        return res;
        
    }
};