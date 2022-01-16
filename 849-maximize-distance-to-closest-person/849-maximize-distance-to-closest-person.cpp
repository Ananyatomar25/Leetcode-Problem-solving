class Solution {
public:
    int maxDistToClosest(vector<int>& seats){
        int i, j=-1;
        int n=seats.size();
        int ma = 0;
        
        for(i=0;i<n;i++){
            if(seats[i]==1){
                if(j== -1){
                    ma =i;
                }
                 
                else{
                    ma = max(ma, (i-j)/2);
                }
                 
            j=i;
        }
        }
        if(seats[n-1] == 0){
            ma = max(ma, (n-1-j));
        }
        
        return ma;
        
        
    }
};