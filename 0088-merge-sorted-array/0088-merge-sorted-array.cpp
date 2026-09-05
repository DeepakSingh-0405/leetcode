class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1;
        int right = n-1;
        int pos = n+m-1;
        vector<int> temp;
         while(left>=0 && right>=0){
            if(nums1[left]>=nums2[right]){
                nums1[pos] = nums1[left];
                left--;
                pos--;
            }
            else{
                nums1[pos] = nums2[right];
                right--;
                pos--;
            }
         }
         while(left>=0){
            nums1[pos] = nums1[left];
                left--;
                pos--;
         }
         while(right>=0){
            nums1[pos] = nums2[right];
                right--;
                pos--;
         }
         
    }
};