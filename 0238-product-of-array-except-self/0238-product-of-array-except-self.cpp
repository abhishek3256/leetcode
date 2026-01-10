class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1;
        int zeroc=0;

        for( int n:nums) {
            if(n==0) zeroc++;
            else mul=mul*n;
        }
        for( int &a:nums){
            if(zeroc>1){
                a=0;
            }
            else if(zeroc==1){
                if(a==0) a=mul;
                else {
                    a=0;
                }
            }
            else{
                a=mul/a;
            }
        }
        return nums;
    }
};