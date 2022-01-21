class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas =0, totalCost =0;
        
        for(int i=0;i<gas.size();i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        
        if(totalGas < totalCost) return -1;
        
        int currCost=0;
        int start =0;
        
        for(int i=0;i<gas.size();i++){
            
            if(currCost <0){
                currCost =0;
                start =i;
            }
            
            currCost += gas[i]-cost[i];
        }
        
        return start;
    }
};