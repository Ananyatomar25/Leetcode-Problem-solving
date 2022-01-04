class Solution {
public:
    int bitwiseComplement(int num) {
        int i =0,result =0;
        do{
            if((num&1)==0){
                result+=(1<<i);
            }
            
            i++;
            num=(num>>1);
        }
        while(num);
        
        return result;
    }
};