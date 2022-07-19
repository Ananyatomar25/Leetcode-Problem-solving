class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // taking n dynamic vectors
        vector<vector<int>> r(numRows);
        
        for(int i=0;i<numRows;i++){
            // no. of rows and cols are always equal so resizing vector everytime.
            r[i].resize(i+1);
            r[i][0] =1; // 1st col of every row is '1'
            r[i][i] = 1; // last col of every row is '1'
            for(int j=1;j<i;j++){ // traversing from 1st col to 2nd last col
                r[i][j] = r[i-1][j] + r[i-1][j-1];
            }
        }
        return r;
        
    }
};