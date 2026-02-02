class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size(),sz2=nums2.size();
        int i=0,j=0;
   
     while(i<sz1 && j<sz2){
            int el1=nums1[i];
            int el2=nums2[j];

            if(el1==el2)return el1;
            else if(el1>el2) j++;
            else i++;
        }
           return -1;
    }
};