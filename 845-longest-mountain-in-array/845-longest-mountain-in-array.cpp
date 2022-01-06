class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size()==0) return 0;
        int len=0;
        int ma=0,flag=0;
        for(int i=0;i<A.size()-1;){
            if(A[i]>A[i+1]){
                flag=1;
                int c=1;
                while(i<A.size()-1 && A[i]>A[i+1]){
                    c++;
                    i++;
                }
                if(c!=0  && len!=0){
                ma=max(ma,len+c);}
                len=0;
            }
            else if(A[i]<A[i+1]){
                flag=1;
                i++;
                len++;
            }
            else{
                len=0;
                i++;
            }
        }
        if(!flag) return 0;
        return ma;
    }
};