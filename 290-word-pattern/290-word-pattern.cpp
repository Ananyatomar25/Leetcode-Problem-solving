class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> v;
        string word;
        unordered_map <char, string> m;
        set<string> S;
        
        
        stringstream iss(s);
        while(iss >> word){
            v.push_back(word);
        }
        
        if(pattern.length()!=v.size()) return false;
        
        for(int i=0;i<v.size();i++){
            
            char ch = pattern[i];
            
            if(m.find(ch)!=m.end()){
                if(m[ch]!=v[i]) return false;
            }
            
            else if(S.count(v[i])>0) return false;
            
            else{
                S.insert(v[i]);
                m[ch] = v[i];
            }
        }
        
        return true;
        
        
        
    }
};