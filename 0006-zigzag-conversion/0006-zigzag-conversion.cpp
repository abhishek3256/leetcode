class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.length();
        vector<vector<char>>arr(numRows,vector<char>(n,'#'));
        int i=0,c=0,j=0;

        for(;c<n;){
            while(c<n && i<numRows){
                arr[i][j]=s[c];
                i++; c++;
            }
            i-=2;   // i==numRows so bring on numRows-2
            j++;
            while(i>0 && c<n){
                arr[i][j]=s[c];
                c++;
                i=i-1;  // top
                j=j+1;  // right
            }
            i=0;  // ensuring rowno=0 
        }

        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<n;j++){
                // cout<<arr[i][j]<<" ";
                if(arr[i][j]!='#'){
                    ans.push_back(arr[i][j]);
                }
            }
            // cout<<endl;
        }
        return ans;
    }
};