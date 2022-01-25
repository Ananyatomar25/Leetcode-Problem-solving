class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3) return false;
        
        int n = arr.size();
//         int i=1;
//         bool flag = false;
        
//         while(i<n-1){
//             if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//                 flag = true;
//                 int j =i;
//                 while(j>0){
//                     if(arr[j-1]<arr[j])
//                         j--;
//                     else return false;
//                 }
//                 int k =i;
//                 while(k<n-1){
//                     if(arr[k]>arr[k+1])
//                         k++;
//                     else return false;
//                 }
//             }
//             i++;
//         }
        
//         if(flag == false) return false;
//         return true;
        
        
        int i = 0, j = n-1;
        
        while(i+1<n-1 && arr[i]<arr[i+1]) i++;
        while(j-1 >0 && arr[j]<arr[j-1]) j--;
        
        return i==j;
    }
};