class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> freqMap;
        int totalEdges = edges.size();
        for(int i = 0; i < totalEdges; ++i) {
            int v1 = edges[i][0];
            int v2 = edges[i][1];
            freqMap[v1]++;
            freqMap[v2]++;
            if (freqMap[v1] == totalEdges) return v1;
            if (freqMap[v2] == totalEdges) return v2;
        }
        return -1; 
    }    
    
};