class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        unordered_map<int,int> m;
        int count =0;
        for(int i=0;i<n;i++){
            time[i] = time[i]%60;
            m[time[i]]+=1;
            
        }
        
        for(auto it:m){
            if(it.first==0 || it.first==30){
                count+= ((it.second)*(it.second-1)/2);
            }
            if(it.first < 30 && m.count(60 -it.first)){
                count+= m[it.first]*m[60-it.first];
            }
        }
        return count;
    }
};