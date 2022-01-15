class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
//--VALID FOR BOTH QUESTIONS---> 1. IN WHICH LAST ELEMENT IS LESS THAN 1ST ELEMENT OF NEXT ROW
 //       ------>2. IN WHICH EVERY ROW AND COL IS SORTED
        
        
//         int i=0, j= matrix[0].size() - 1;
        
//         while(i<matrix.size() && j>=0){
//             if(matrix[i][j] == target) return true;
//                 if(matrix[i][j] > target) j--;
//                 else i++;
//             }
        
//         return false;
        
        //----MORE EFFICIENT APPROACH-------//
        int n = matrix.size();
        int m = matrix[0].size();
        int low =0, high= (n*m)-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid/m][mid%m] == target) return true;
            if(matrix[mid/m][mid%m] > target) high = mid-1;
            if(matrix[mid/m][mid%m] < target) low = mid+1;
        }
        return false;
        
    }
};