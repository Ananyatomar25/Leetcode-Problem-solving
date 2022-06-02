class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans[j][i] = matrix[i][j];
            }
        }
        
        return ans;
    }
};