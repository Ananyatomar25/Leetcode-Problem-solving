class Solution {
    // consider TUF article ---> 1. insertion sort instead of sort inbuilt
    // 2. GAP method
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0) return;
        if(n==1 && m==0) nums1[0] = nums2[0];
        
        int i=0,j=0;
        while(i<m){
            if(nums1[i] <= nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(), nums2.end());
                i++;
                
            }
            
        }
        
        for(;i<n+m;i++){
            swap(nums1[i],nums2[j++]);
        }
        
    }
};