class Solution {
public:
    
    int helper(vector<vector<int>>& graph){
        
        int n = graph.size();
        int all = (1<<n) -1;    //if n= 5 then 11111
        
        queue<pair<int ,pair<int,int>>> q;
        set<pair<int,int>> visited;
        
        for(int i=0;i<n;i++){
            int mask = (1<<i);
            q.push({i,{0,mask}});
            visited.insert({i,mask});
        }
        
        
        while(!q.empty()){
            
            auto node = q.front();
            q.pop();
            int val = node.first;
            int curr_mask = node.second.second;
            int dist = node.second.first;
            
            for(auto it: graph[val]){
                
                int newMask = (curr_mask | (1<<it));
                
                if(newMask == all) return dist+1;
                
                else if(visited.count({it,newMask})) continue;
                
                else{
                    q.push({it,{dist+1,newMask}});
                    visited.insert({it,newMask});
                }
            }
            
        }
        
        return 0;
    }
    
    
    
    
    int shortestPathLength(vector<vector<int>>& graph) {
        
        if(graph.size() == 1) return 0;
        
        return helper(graph);
    }
};