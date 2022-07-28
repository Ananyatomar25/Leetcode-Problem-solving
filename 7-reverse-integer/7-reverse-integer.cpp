class Solution {
public:
    int reverse(int x) {
        
        int newNo = 0;
        while( x){
            if(newNo > INT_MAX/10 || newNo < INT_MIN/10) return 0;
                int d = x%10;
                x = x/10;
                newNo = (newNo*10 + d);
        }
        
        return newNo;
    }
};