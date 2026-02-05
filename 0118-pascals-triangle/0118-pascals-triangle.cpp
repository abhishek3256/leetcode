class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        result.push_back({1});
        for(int i = 1 ; i < numRows ; i++){
            vector<int>currRows( i + 1 , 1);
            vector<int>prevRows = result.back();
            for(int j = 1 ; j < i  ; j++){
                currRows[j] = prevRows[j-1] + prevRows[j];
            }
            result.push_back(currRows);
        }
        return result;
    }
};