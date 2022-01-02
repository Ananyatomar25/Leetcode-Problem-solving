class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1+str2 == str2+str1){ // to check if both strings are a multiple of same string X
            int gc = gcd(str1.length(),str2.length());
            string ans = str1.substr(0,gc);
            return ans;
        }
        return "";
        
    }
};