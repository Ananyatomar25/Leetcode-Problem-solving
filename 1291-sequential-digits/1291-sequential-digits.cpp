class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> ans;
        string digits ="123456789";
        int l = to_string(low).length();
        int h = to_string(high).length();
        
        for(int i =l;i<=h;i++){
            for(int j =0;j<10-i;j++){
                int num = stoi(digits.substr(j,i));
                if(num>= low && num<=high) ans.push_back(num);
            }
        }
        return ans;
        
    }
};