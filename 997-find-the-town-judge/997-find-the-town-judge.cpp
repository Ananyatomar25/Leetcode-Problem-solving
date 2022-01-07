class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // vector<pair<int,int>> v(n+1,{0,0});
        
        
        //------------USING HASHMAP---------------//
//         for(int i=0;i<trust.size();i++){
//             v[trust[i][0]].first++;
//             v[trust[i][1]].second++;
//         }
        
//         for(int i=1;i<=n;i++){
//             if(v[i].first ==0 && v[i].second==n-1)
//                 return i;
//         }
        
//         return -1;
        
        
        //------------USING GRAPH (INDEGREE,OUTDEGREE)--------------//
        
        vector<int> v(n+1,0);
        for(auto &it:trust){
            v[it[0]]--;
            v[it[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(v[i]==n-1) return i;
        }
        
        return -1;
        
    }
};