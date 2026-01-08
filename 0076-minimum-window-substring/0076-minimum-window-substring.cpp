class Solution {
public:
    string minWindow(string s, string t) {
    int n=s.size();    
    if(t.size()>s.size()) return "";  
    if(t.size()==s.size()  && s==t) return s;  
    unordered_map<char,int>mp;
    for( char &c: t)  mp[c]++;
    int left=0;
    int minlen=INT_MAX;
    int count=t.size();
    int start_i=0;
    for( int right=0;right<s.size();right++){
        if(mp[s[right]] > 0){
          
            count--;
        }
          mp[s[right]]--;
        // if(!mp.count(s[right])) mp[s[right]]=-1;
        // if(mp[s[right]]<=0) mp[s[right]]--;
        
            while(count==0){
            int curr=right-left+1;
            if(curr<minlen){   
            minlen=min(minlen,curr);
            start_i=left;
            }
            mp[s[left]]++;
            if(mp[s[left]]>0 ) count++;
            
            
            left++;
            }

    }
    return minlen==INT_MAX? "": s.substr(start_i,minlen); 
        
    }
};