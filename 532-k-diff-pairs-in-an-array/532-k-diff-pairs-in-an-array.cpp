class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count =0;
        
//         unordered_map<int,int> mp;
        
//         for(auto it: nums){
//             mp[it]++;
//         }
//         for(auto it: mp){
//             if(k==0){
//                 if(it.second>1) count++;
//             }
            
//             else if(mp.find(it.first+k) != mp.end()){
//                  count++;
//             }
//         }
        
//         return count;
        sort(nums.begin(),nums.end());
 		int j=1;
 		int i=0;
 		
 		while(i<nums.size() && j<nums.size()){
 			if(nums[j]-nums[i]==k){
 				count++;
 				j++;
 				i++;
 				while(j<nums.size() && nums[j]==nums[j-1]){
 					j++;
 				}
 			}
 			else if(nums[j]-nums[i]>k){
 				i++;  
 				if(j-i==0){
 					j++;}
 			}
 			else{      
 				j++;
 			}         
		}
 		return count;
        
    }
};