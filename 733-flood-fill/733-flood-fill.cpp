class Solution {
public:
    
    void helper(int m, int n, vector<vector<int>>& image, int i, int j, int target, int color){
        if(i <0 || j< 0 || i>=m || j>=n || image[i][j] != target || image[i][j] == color) return;
        
        image[i][j] = color;
        
        helper(m,n,image,i+1,j,target,color);
        helper(m,n,image,i-1,j,target,color);
        helper(m,n,image,i,j+1,target,color);
        helper(m,n,image,i,j-1,target,color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int m = image.size(), n = image[0].size();
        helper(m,n,image, sr, sc, image[sr][sc], color);
        return image;
        
    }
};