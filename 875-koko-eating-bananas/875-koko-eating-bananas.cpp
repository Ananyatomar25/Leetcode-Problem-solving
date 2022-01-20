class Solution {
public:
    
    
    static bool canEat(vector<int>& piles, int mid, int h){
        int hours =0;
        for(int i=0;i<piles.size();i++){
            hours+= (piles[i]/mid);
            if(piles[i]%mid != 0) hours++;
        }
        
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = 1000000000;
        int mid;
        
        while(low<=high){
           mid= low +(high-low)/2;
            if(canEat(piles,mid,h)) high = mid-1;
            else low = mid+1;
        }
        
        return low;
        
        
    }
};