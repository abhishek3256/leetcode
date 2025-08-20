class Solution {
public:
    string reverseWords(string s) {
      
       vector<string>pr;
        string temp="";
        int n=s.size();
        int count=1;
        for(int i=0;i<n;i++)
        {
             if(s[i]==' ')
             {
                  if(temp!="")
                  {
                    pr.push_back(temp);
                    count++;
                    temp="";
                  }
             }
             else
             {
                 temp+=s[i];
             }
        }
        if(temp!="")
        {
             pr.push_back(temp);
                    count++;
        }
        for(int i=0;i<pr.size();i++)
        {
            cout<<pr[i]<<" ";
        }
        int m=pr.size();
        string temp1="";
        for(int i=m-1;i>=0;i--)
        {
            if(i!=0)
            {
                  temp1+=pr[i];
                  temp1+=' ';
            }
            else
            {
                 temp1+=pr[i];
            }

           
           
        }
        return temp1;
    }
};