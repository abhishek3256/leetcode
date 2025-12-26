class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int val1,val2,val;
        stack<int> st;
        for( string c:tokens){
            if(c=="+"){
                val1=st.top();
                st.pop();
                val2=st.top();
                val2=val2+val1;
                st.pop();
                st.push(val2);
            }
            else if(c=="-"){
                val1=st.top();
                st.pop();
                val2=st.top();
                val2=val2-val1;
                st.pop();
                st.push(val2);
            }
            else if(c=="*"){
                val1=st.top();
                st.pop();
                val2=st.top();
                val2=val2*val1;
                st.pop();
                st.push(val2);
        }
        else if(c=="/"){
                val1=st.top();
                st.pop();
                val2=st.top();
                val2=val2/val1;
                st.pop();
                st.push(val2);
        }
        else{
            val=stoi(c);
            st.push(val);
        }
        }
    val=st.top();
    return val;
        }
};