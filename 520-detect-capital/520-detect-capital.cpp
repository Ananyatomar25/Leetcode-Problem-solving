class Solution {
public:
    bool detectCapitalUse(string word) {
        
        if(word[0]>=65 && word[0]<=90 && word[1]>=65 && word[1]<=90){
            int i=2;
            while(i<word.length()){
                if(word[i]>=65 && word[i]<=90)
                    i++;
                else return false;
            }
            
        }
        
        else if(word[0]>=65 && word[0]<=90){
            int i=1;
            while(i<word.length()){
                if(word[i]>=97 && word[i]<=122)
                    i++;
                else return false;
            }
        }
        else if(word[0]>=97 && word[0]<=122){
            int i=1;
            while(i<word.length()){
                if(word[i]>=97 && word[i]<=122) i++;
                else return false;
            }
        }
        
        return true;
    }
};