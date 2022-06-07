class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) return false;
        
        vector<int> num;
        
        while(x > 0){
            int temp = x % 10;
            x = x/10;
            num.push_back(temp);
        }
        int n = num.size();
        for(int i =0;i<n;i++){
            if(num[i] != num[n-1-i]) return false;
        }
        
        return true;
        
    }
};