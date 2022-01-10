// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
     unordered_set<string> m;
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               if(mat[i][j]!=0){
                   if(m.find("row"+to_string(i) + to_string(mat[i][j]))!=m.end() || 
                       m.find("col"+to_string(j) + to_string(mat[i][j]))!=m.end() ||
                       m.find("box"+to_string(((i/3)*3)+j/3) + to_string(mat[i][j]))!=m.end()){
                           return false;
                       
                   }else{
                       m.insert("row"+to_string(i) + to_string(mat[i][j]));
                       m.insert("col"+to_string(j) + to_string(mat[i][j]));
                       m.insert("box"+to_string(((i/3)*3)+j/3) + to_string(mat[i][j]));
                   }
               }
           }
       }
       return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends