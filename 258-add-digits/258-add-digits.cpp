class Solution {
public:
    int addDigits(int num) {
        
        if(num == 0) return 0;
        int ans =0;
        
       string temp = to_string(num);
        while(temp.length()>=1){
            int sum =0;
            if(temp.length() == 1) break;
            for(int i=0;i<temp.length();i++){
                sum = sum+(temp[i]-'0');
            }
            temp = to_string(sum);
        }
        return (ans=stoi(temp));
    }
};