class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n = s.length();
        
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>=n) return 0;
        int sign =1;
        if(s[i]=='+' || s[i]=='-') {
            sign = (s[i]=='+')?1:-1;
           i++;
        }
        if(i>=n) return 0;
        
        int num =0;
        for(;i<n && (s[i]>='0' && s[i]<='9');i++){
            if(num > INT_MAX/10 || ((num==INT_MAX/10) && s[i]-'0'> INT_MAX%10)){
                return (sign==1)?INT_MAX:INT_MIN;
            }
            num = num*10 + (s[i]-'0');
        }
        
        return num*sign;
        
        
        
    }
};