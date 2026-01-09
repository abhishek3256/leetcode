class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.size();
        for (char c : num) {
            while (!st.empty() && k > 0 && c < st.top()) {
                st.pop();
                k--;
            }
            st.push(c);
        } 

            while(!st.empty() && k>0){
                st.pop();
                k--;
            }
            string s="";
           while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
            reverse(s.begin(),s.end());
            int i=0;
            while(i<s.size() && s[i]=='0'){
                i++;
            }

          string res = s.substr(i);
          return res.empty() ? "0" : res;

        
    }
};