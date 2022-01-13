class Solution {
public:
    
    static bool comparator(vector <int> &v1, vector <int> &v2){
        if(v1[1]<v2[1]) return true;
        return false;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comparator);
        
        int count =1 , end = points[0][1];
        
        for(int i=1;i<points.size();i++){
            if(points[i][0]>end){
                count++;
                end = points[i][1];
            }
        }
        return count;
    }
};