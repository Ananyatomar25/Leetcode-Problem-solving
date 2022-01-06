class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ma = 0;
        int mi = INT_MAX;
        
        // for(int i=0;i<prices.size();i++){
            // mi = min(mi, prices[i]);
            // ma = max(ma, prices[i] - mi);
    // }
   
            int i;
            for(i=0;i<prices.size();i++){
                if(prices[i]<mi) mi = prices[i];
                else if(prices[i] - mi > ma) ma = prices[i] - mi;
            }
         return ma;
    }
};