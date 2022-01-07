class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        int cnt =0;
        vector<int> m(60,0);
        for(auto &it:time){
            int num = it%60;
            if(num==0) cnt+=m[0];
            else cnt+=m[60-num];
            m[num]++;
        }
        
        return cnt;
        
    }
};